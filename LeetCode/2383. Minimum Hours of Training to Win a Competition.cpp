class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int cnt=0,x;
        for(int i=0;i<energy.size();i++){
            if(initialEnergy>energy[i] && initialExperience>experience[i]){
                initialExperience+=experience[i];
                initialEnergy-=energy[i];
            }
            else{
                if(experience[i]>=initialExperience){
                    x=experience[i]-initialExperience+1;
                    cnt+=x;
                    initialExperience+=x;
                }

                if(energy[i]>=initialEnergy){
                    x=energy[i]-initialEnergy+1;
                    cnt+=x;
                    initialEnergy+=x;
                }
                initialExperience+=experience[i];
                initialEnergy-=energy[i];
            }
        }
        return cnt;
    }
};
