// https://us.bbcollab.com/collab/ui/session/playback

// this is to prep me to understand classes better. 
// watching the videos on how to start the class 
// and how to add layers to the class.
class Cylinder{
    private:
    double radius;
    double height;
    friend string show(Cylinder);

    public:
    Cylinder(double r= 0, double h=0);
    // r stands for radius and h for height



};

Cylinder::Cylinder(double r, double h){
    radius=r;
    height =h;

}

string show(Cylinder C){
    return "Cylinder(" << 
}// minute 10:57

int main(){
    Cylinder C1(10,20); // radius and height
    Cylinder C2(5,5);
    cout << show(C1)<< endl; // Cyliner(10,20)
    cout << show(C2)<< endl;
    // Illustratiing the two friend functions
    cout << getBaseArea(C1)<< endl;// takes an instance as its argument
    cout<< getSideArea(&C2)<< endl;// here we pass the address to the function since it taks a pointer
    // as its argument
    cout << C1.getVolume()<< endl;// class function, takes no input, works in any instance
    cout << show(compareVolumes(C1,C2))<< endl;
    cout << show(C1+C2)<< endl;
    cout << show(C1-C2)<< endl;
    return 0;
}