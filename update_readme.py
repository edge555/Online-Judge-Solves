import os

repo_path = os.path.dirname(os.path.abspath(__file__))
readme_path = os.path.join(repo_path, "README.md")

ignore_folders = {".git"}
folders = [f for f in os.listdir(repo_path) if os.path.isdir(os.path.join(repo_path, f)) and f not in ignore_folders]

language_extensions = {
    "C++": {".cpp"},
    "C": {".c"},
    "Python": {".py"},
    "Java": {".java"},
    "C#": {".cs"}
}

all_extensions = {".py", ".cs", ".c", ".cpp", ".java", ".js"}
other_extensions = all_extensions - {ext for exts in language_extensions.values() for ext in exts}

counts = {}
language_counts = {lang: 0 for lang in language_extensions}
language_counts["Others"] = 0 

def count_code_files(folder_path):
    """Counts files by category in a folder (including subfolders)."""
    local_counts = {lang: 0 for lang in language_extensions}
    local_counts["Others"] = 0
    total_count = 0

    for root, dirs, files in os.walk(folder_path):
        dirs[:] = [d for d in dirs if d not in ignore_folders]  
        for file in files:
            ext = os.path.splitext(file)[1]
            if ext in all_extensions:
                total_count += 1
                for lang, exts in language_extensions.items():
                    if ext in exts:
                        local_counts[lang] += 1
                        break
                else:
                    if ext in other_extensions:
                        local_counts["Others"] += 1

    return total_count, local_counts

total_files = 0 

for folder in folders:
    folder_path = os.path.join(repo_path, folder)
    folder_total, folder_lang_counts = count_code_files(folder_path)
    counts[folder] = folder_total
    total_files += folder_total

    for lang in folder_lang_counts:
        language_counts[lang] += folder_lang_counts[lang]

readme_content = "# Online Judge Code Repository\n\n"
readme_content += "This repository contains solutions to various online judges.\n\n"
readme_content += "## Code Count Per Online Judge\n\n"

for folder, count in counts.items():
    readme_content += f"- **{folder}**: {count}\n"

readme_content += f"\n**Total code files: {total_files}**\n"

readme_content += "\n## Code Count by Language\n\n"
for lang, count in language_counts.items():
    readme_content += f"- **{lang}**: {count}\n"

with open(readme_path, "w", encoding="utf-8") as f:
    f.write(readme_content)

print("README.md updated successfully!")
