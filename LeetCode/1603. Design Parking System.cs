public class ParkingSystem {
    int _big=0,_medium=0,_small=0;
    public ParkingSystem(int big, int medium, int small) {
        _big=big;
        _medium=medium;
        _small=small;
    }
    
    public bool AddCar(int carType) {
        if(carType==1){
            if(_big>0){
                _big--;
                return true;
            }
        }
        else if(carType==2){
            if(_medium>0){
                _medium--;
                return true;
            }
        }
        else{
            if(_small>0){
                _small--;
                return true;
            } 
        }
        return false;
    }
}