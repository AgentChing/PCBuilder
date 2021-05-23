#include "mainwindow.h" // Opens mainwindows.h header file
#include "ui_mainwindow.h"
#include<iostream>
#include<fstream>
#include<math.h>


using namespace std;


class parts{
    public:
        virtual int getprice()=0;
        virtual void setprice(int v)=0;
        virtual void printdata(){
            cout<<endl<<"No data found";
        }
};
class Processor:public parts{
    private:
        int price;
    public:
        string brand;
        string model;
        int cores;
        int threads;
        int getprice(){
            return price;
        }
        void setprice(int v){
            price=v;
        }

        void printdata(){
            cout<<" |_Brand: "<<brand<<"\t\t\t";
            cout<<" |_Model: "<<model<<endl;
            cout<<" |_Cores: "<<cores<<"\t\t\t";
            cout<<" |_Threads: "<<threads<<endl;
            cout<<"\t\t\t\t |_Cost: rs"<<getprice()<<endl;
        }
};
class Ram:public parts{
    private:
        int price;
    public:
        string brand;
        string model;
        string type;
        int Rsize;
        int getprice(){
            return price;
        }
        void setprice(int v){
            price=v;
        }

        void printdata()
        {
            cout<<" |_Brand: "<<brand<<"\t\t";
            cout<<" |_Model: "<<model<<endl;
            cout<<" |_Type: "<<type<<"\t\t\t";
            cout<<" |_Size: "<<Rsize<<endl;
            cout<<"\t\t\t\t |_Cost: rs"<<getprice()<<endl;

        }
};
class Storage:public parts{
    private:
        int price;
    public:
        string brand;
        string model;
        string interface;
        string type;
        string cache;
        string capacity;
        int getprice(){
            return price;
        }
        void setprice(int v){
            price=v;
        }

        void printdata()
        {
            cout<<" |_Brand: "<<brand<<"\t\t\t";
            cout<<" |_Model: "<<model<<endl;
            cout<<" |_Interface: "<<interface<<"\t\t";
            cout<<" |_Type: "<<type<<endl;
            cout<<" |_Cache: "<<cache<<"\t\t\t";
            cout<<" |_Capacity: "<<capacity<<endl;
            cout<<"\t\t\t\t |_Cost: rs"<<getprice()<<endl;


        }
};
class Graphics:public parts{
    private:
        int price;
    public:
        string brand;
        string model;
        string memory;
        string interface;
        string chipset;
        int getprice(){
            return price;
        }
    void setprice(int v){
            price=v;
        }

        void printdata(){
        cout<<" |_Brand: "<<brand<<"\t\t\t";
        cout<<" |_Model: "<<model<<endl;
        cout<<" |_Memory: "<<memory<<"\t\t\t";
        cout<<" |_Interface: "<<interface<<endl;
        cout<<" |_ChipSet: "<<chipset<<endl;
        cout<<"\t\t\t\t |_Cost: rs"<<getprice()<<endl;


        }
};
class Motherboard:public parts{
    private:
        int price;
    public:
        string brand;
        string model;
        string socket;
        string chipset;
        int getprice(){
            return price;
        }
        void setprice(int v){
            price=v;
        }

        void printdata(){
            cout<<" |_Brand: "<<brand<<"\t\t\t";
            cout<<" |_Model: "<<model<<endl;
            cout<<" |_Socket: "<<socket<<"\t\t\t";
            cout<<" |_ChipSet: "<<chipset<<endl;
            cout<<"\t\t\t\t |_Cost: rs"<<getprice()<<endl;

        }
};
class Powersupply:public parts{
    private:
        int price;
    public:
        string brand;
        string model;
        string power;
        int getprice(){
            return price;
        }
        void setprice(int v){
            price=v;
        }

        void printdata(){
        cout<<" |_Brand: "<<brand<<"\t\t\t";
        cout<<" |_Model: "<<model<<endl;
        cout<<" |_Power: "<<power;
        cout<<"\t\t\t\t |_Cost: rs"<<getprice()<<endl;
        }
};

// Generate benchmark is to calculate the most appropriate set of PC user can buy without applying this algo.
void generate_benchmark(Processor* processor ,Ram* ram,Storage* storage,Graphics* graphics,Motherboard* motherboard,Powersupply* powersupply,int* arr)
{
   int price=0;
   for(int i=0;i<20;i++)
   {
       arr[i] = processor[i].getprice()+ram[i].getprice()+storage[i].getprice()+graphics[i].getprice()+motherboard[i].getprice()+powersupply[i].getprice();
   }

}

class PC:public Processor,public Ram,public Storage,public Graphics,public Motherboard,public Powersupply{

private:
    int price;
public :
    Processor processor;
    Ram ram;
    Storage storage;
    Graphics graphics;
    Motherboard motherboard;
    Powersupply powersupply;
    int getprice(){
            return price;
        }
    void setprice(int v){
            price=v;
        }
    int flag[6]={0,0,0,0,0,0};

};

int readfile(Processor *processor, Graphics *graphics, Ram *ram, Storage *storage, Motherboard *motherboard, Powersupply *powersupply,  Ui::MainWindow *ui)
{
   // Ui::MainWindow ui;

    int exc=0,cost=0;
    ifstream f;
    f.open("C:\\Users\\HP\\Desktop\\processor1.csv",ios::in);
    if(!f){
        ui->display->setText("ERROR:No File found for Processor\n");
        exc=1;
    }
    else{
            for(int i=0;i<20;i++)
    {
     f>>processor[i].brand>>processor[i].model>>cost>>processor[i].cores>>processor[i].threads;
     processor[i].setprice(cost);
    }
    }

    f.close();
    f.open("C:\\Users\\HP\\Desktop\\ram1.csv",ios::in);
    if(!f){
        cout<<"ERROR:No File found for Ram"<<endl;
        exc=2;
    }
    else{
            for(int i=0;i<20;i++)
    {
     f>>ram[i].brand>>ram[i].model>>cost>>ram[i].Rsize>>ram[i].type;
     ram[i].setprice(cost);
    }
    }

    f.close();

     f.open("C:\\Users\\HP\\Desktop\\storage1.csv",ios::in);
    if(!f){
        cout<<"ERROR:No File found for Storage"<<endl;
        exc=3;
    }
    else{
            for(int i=0;i<20;i++)
    {
     f>>storage[i].brand>>storage[i].model>>cost>>storage[i].capacity>>storage[i].interface>>storage[i].type>>storage[i].cache;
     storage[i].setprice(cost);
    }
    }

    f.close();

         f.open("C:\\Users\\HP\\Desktop\\graphics1.csv",ios::in);
    if(!f){
        cout<<"ERROR:No File found for Graphics"<<endl;
        exc=4;
    }
    else{
            for(int i=0;i<20;i++)
    {
     f>>graphics[i].brand>>graphics[i].model>>cost>>graphics[i].memory>>graphics[i].interface>>graphics[i].chipset;
     graphics[i].setprice(cost);
    }
    }
    f.close();

             f.open("C:\\Users\\HP\\Desktop\\motherboard1.csv",ios::in);
    if(!f){
        cout<<"ERROR:No File found for Motherboard"<<endl;
        exc=5;
    }
    else{
            for(int i=0;i<20;i++)
    {
     f>>motherboard[i].brand>>motherboard[i].model>>cost>>motherboard[i].chipset>>motherboard[i].socket;
     motherboard[i].setprice(cost);
    }
    }

    f.close();


             f.open("C:\\Users\\HP\\Desktop\\powersupply1.csv",ios::in);
    if(!f){
        cout<<"ERROR:No File found for Powersupply"<<endl;
        exc=6;
    }
    else{
            for(int i=0;i<20;i++)
    {
     f>>powersupply[i].brand>>powersupply[i].model>>cost>>powersupply[i].power;
     powersupply[i].setprice(cost);
    }

    f.close();
    }
    return exc;
}


// increases binary-counter by 1, which we will later use in optimisation part.
void addbinary(int* arr)
{
    int num=0;
    for(int i=0;i<6;i++)
    {
       num=  num+pow(2,5-i)*arr[i];
    }
    num+=1;
    for(int i=5;i>=0;i--)
    {
       arr[i] = num%2;
       num=num/2;
    }

}

// stores the components data after optimisation in the object PC.
void build_pc(PC* pc,Processor *processor, Graphics *graphics, Ram *ram, Storage *storage, Motherboard *motherboard, Powersupply *powersupply,int* arr,int budget)
{
    int i;
    for(i=0;i<19;i++)
    {
        if(arr[i]>budget)
            break;
    }
    int bench[]={0,0,0,0,0,0};
    int sum = arr[i];
    pc[0].processor.brand = processor[i-bench[0]].brand;
    pc[0].processor.model = processor[i-bench[0]].model;
    pc[0].processor.setprice(processor[i-bench[0]].getprice());
    pc[0].processor.cores= processor[i-bench[0]].cores;
    pc[0].processor.threads= processor[i-bench[0]].threads;
    pc[0].ram.brand=ram[i-bench[2]].brand;
    pc[0].ram.model=ram[i-bench[2]].model;
    pc[0].ram.setprice(ram[i-bench[2]].getprice());
    pc[0].ram.type=ram[i-bench[2]].type;
    pc[0].ram.Rsize=ram[i-bench[2]].Rsize;
    pc[0].storage.brand=storage[i-bench[3]].brand;
    pc[0].storage.model=storage[i-bench[3]].model;
    pc[0].storage.setprice(storage[i-bench[3]].getprice());
    pc[0].storage.interface=storage[i-bench[3]].interface;
    pc[0].storage.type=storage[i-bench[3]].type;
    pc[0].storage.cache=storage[i-bench[3]].cache;
    pc[0].storage.capacity=storage[i-bench[3]].capacity;
    pc[0].graphics.brand=graphics[i-bench[1]].brand;
    pc[0].graphics.model=graphics[i-bench[1]].model;
    pc[0].graphics.setprice(graphics[i-bench[1]].getprice());
    pc[0].graphics.memory=graphics[i-bench[1]].memory;
    pc[0].graphics.interface=graphics[i-bench[1]].interface;
    pc[0].graphics.chipset=graphics[i-bench[1]].chipset;
    pc[0].motherboard.brand=motherboard[i-bench[4]].brand;
    pc[0].motherboard.model=motherboard[i-bench[4]].model;
    pc[0].motherboard.setprice(motherboard[i-bench[4]].getprice());
    pc[0].motherboard.socket=motherboard[i-bench[4]].socket;
    pc[0].motherboard.chipset=motherboard[i-bench[4]].chipset;
    pc[0].powersupply.brand= powersupply[i-bench[5]].brand;
    pc[0].powersupply.model= powersupply[i-bench[5]].model;
    pc[0].powersupply.setprice(powersupply[i-bench[5]].getprice());
    pc[0].powersupply.power=powersupply[i-bench[5]].power;
    pc[0].setprice(sum);

    int counter1=1, counter2=0;
    while(counter1<6 && counter2<64)
    {
        addbinary(bench);
        sum= processor[i-bench[0]].getprice()+graphics[i-bench[1]].getprice()+ram[i-bench[2]].getprice()+storage[i-bench[3]].getprice()+motherboard[i-bench[4]].getprice()+powersupply[i-bench[5]].getprice();
        if(sum<=budget)
        {
            pc[counter1].processor.brand = processor[i-bench[0]].brand;
            pc[counter1].processor.model = processor[i-bench[0]].model;
            pc[counter1].processor.setprice(processor[i-bench[0]].getprice());
            pc[counter1].processor.cores= processor[i-bench[0]].cores;
            pc[counter1].processor.threads= processor[i-bench[0]].threads;
            pc[counter1].ram.brand=ram[i-bench[2]].brand;
            pc[counter1].ram.model=ram[i-bench[2]].model;
            pc[counter1].ram.setprice(ram[i-bench[2]].getprice());
            pc[counter1].ram.type=ram[i-bench[2]].type;
            pc[counter1].ram.Rsize=ram[i-bench[2]].Rsize;
            pc[counter1].storage.brand=storage[i-bench[3]].brand;
            pc[counter1].storage.model=storage[i-bench[3]].model;
            pc[counter1].storage.setprice(storage[i-bench[3]].getprice());
            pc[counter1].storage.interface=storage[i-bench[3]].interface;
            pc[counter1].storage.type=storage[i-bench[3]].type;
            pc[counter1].storage.cache=storage[i-bench[3]].cache;
            pc[counter1].storage.capacity=storage[i-bench[3]].capacity;
            pc[counter1].graphics.brand=graphics[i-bench[1]].brand;
            pc[counter1].graphics.model=graphics[i-bench[1]].model;
            pc[counter1].graphics.setprice(graphics[i-bench[1]].getprice());
            pc[counter1].graphics.memory=graphics[i-bench[1]].memory;
            pc[counter1].graphics.interface=graphics[i-bench[1]].interface;
            pc[counter1].graphics.chipset=graphics[i-bench[1]].chipset;
            pc[counter1].motherboard.brand=motherboard[i-bench[4]].brand;
            pc[counter1].motherboard.model=motherboard[i-bench[4]].model;
            pc[counter1].motherboard.setprice(motherboard[i-bench[4]].getprice());
            pc[counter1].motherboard.socket=motherboard[i-bench[4]].socket;
            pc[counter1].motherboard.chipset=motherboard[i-bench[4]].chipset;
            pc[counter1].powersupply.brand= powersupply[i-bench[5]].brand;
            pc[counter1].powersupply.model= powersupply[i-bench[5]].model;
            pc[counter1].powersupply.setprice(powersupply[i-bench[5]].getprice());
            pc[counter1].powersupply.power=powersupply[i-bench[5]].power;
            pc[counter1].setprice(sum);
            counter1+=1;
            for(int i=0;i<6;i++)
            {
                pc[counter1].flag[i] = bench[i];
            }
        }
        counter2+=1;
    }

}


// shows the data of our PC
void showpc(PC pc)
{

    cout<<"PC: \n"<<"TOTAL COST= "<<pc.getprice()<<endl;

    cout<<"|_Processor:--------------------------------------------------"<<endl;
    pc.processor.printdata();
    cout<<"|_MotherBoard:--------------------------------------------------"<<endl;
    pc.motherboard.printdata();
    cout<<"|_Graphics Card:--------------------------------------------------"<<endl;
    pc.graphics.printdata();
    cout<<"|_Storage:--------------------------------------------------"<<endl;
    pc.storage.printdata();
    cout<<"|_RAM:--------------------------------------------------"<<endl;
    pc.ram.printdata();
    cout<<"|_PowerSupply:--------------------------------------------------"<<endl;
    pc.powersupply.printdata();
}


// this class is just important to get every other class to inherit other classes without conflicts.
class prgdata{
 public:
    int budget = 0;
    int arra[20];
    Processor processor[20];
    Graphics graphics[20];
    Ram ram[20];
    Storage storage[20];
    Motherboard motherboard[20];
    Powersupply powersupply[20];
    PC pc[6];
    QString min, max;
    int pak=1;


};




prgdata prg;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

        int status = readfile(prg.processor,prg.graphics,prg.ram,prg.storage,prg.motherboard,prg.powersupply, ui);
        if(status==0)
            {
                ui->display->setText("DATA LOADED SUCESSFULLY");
            }

            if(status == 1)
            {

                 ui->display->setText("ERROR:No File found for Processor\n");
            }
            else if(status == 2)
            {
                ui->display->setText("ERROR:No File found for Ram\n");
            }
            else if(status == 3)
            {
                ui->display->setText("ERROR:No File found for Storage\n");
            }
            else if(status == 4)
            {
                ui->display->setText("ERROR:No File found for Graphics\n");
            }
            else if(status == 5)
            {
                ui->display->setText("ERROR:No File found for MotherBoard\n");
            }
            else if(status == 6)
            {
                ui->display->setText("ERROR:No File found for Power Supply\n");
            }
            else{
               ui->display->setText("GENERATING BENCHMARKS");
            }
            generate_benchmark(prg.processor,prg.ram,prg.storage,prg.graphics,prg.motherboard,prg.powersupply,prg.arra);
            prg.min = QString::number(prg.arra[0]);
            prg.max = QString::number(prg.arra[19]);
            ui->leMinprice->setText(prg.min);
            ui->leMaxprice->setText(prg.max);
            ui->leMinprice->setReadOnly(true);
            ui->leMaxprice->setReadOnly(true);
            ui->bDetailgraphics->setEnabled(false);
            ui->bDetailprocessor->setEnabled(false);
            ui->bDetailram->setEnabled(false);
            ui->bDetailstore->setEnabled(false);
            ui->bDetailmother->setEnabled(false);
            ui->bDetailpower->setEnabled(false);
            ui->bPakage1->setEnabled(false);
            ui->bPakage2->setEnabled(false);
            ui->bPakage3->setEnabled(false);
            ui->bPakage4->setEnabled(false);
            ui->bPakage5->setEnabled(false);
            ui->bPakage6->setEnabled(false);





}

MainWindow::~MainWindow()
{
    delete ui;
}

void runprogram(){


}



void MainWindow::on_bBuild_clicked()
{
    prg.budget = ui->leBudget->text().toInt();
    int min;
   //max = ui->leMaxprice->text().toInt();
    min = ui->leMinprice->text().toInt();
    if(prg.budget<min)
    {   QString te ="This Amount is Too Little.\n\nMaybe you'd like to buy a Calculator?\nAnyways,Look at the Min. and Max. Price to decide.";
        for(int i=0;i<38;i++)
        {
            te=te+'\n';
        }
           te=te+ "\t\t\t\t   Now get your Broke Ass outta here!!";
        ui->display->setText(te);;
    }
    else{
       setvalues();
       S="Optimum Package\n\n";
       features();
       ui->display->setText(S);
       ui->bDetailgraphics->setEnabled(true);
       ui->bDetailprocessor->setEnabled(true);
       ui->bDetailram->setEnabled(true);
       ui->bDetailstore->setEnabled(true);
       ui->bDetailmother->setEnabled(true);
       ui->bDetailpower->setEnabled(true);
       ui->bPakage1->setEnabled(true);
       ui->bPakage2->setEnabled(true);
       ui->bPakage3->setEnabled(true);
       ui->bPakage4->setEnabled(true);
       ui->bPakage5->setEnabled(true);
       ui->bPakage6->setEnabled(true);
    }

}

void MainWindow::setvalues(){
    QString s = QString::number(prg.budget);
    build_pc(prg.pc,prg.processor,prg.graphics,prg.ram,prg.storage,prg.motherboard,prg.powersupply,prg.arra,prg.budget);
    ui->display->setText("Models ready");
    ui->leBrandproce->setText(QString::fromUtf8(prg.pc[prg.pak].processor.brand.c_str()));
    ui->leBrandgraph->setText(QString::fromUtf8(prg.pc[prg.pak].graphics.brand.c_str()));
    ui->leBrandram->setText(QString::fromUtf8(prg.pc[prg.pak].ram.brand.c_str()));
    ui->leBrandstora->setText(QString::fromUtf8(prg.pc[prg.pak].storage.brand.c_str()));
    ui->leBrandmother->setText(QString::fromUtf8(prg.pc[prg.pak].motherboard.brand.c_str()));
    ui->leBrandpower->setText(QString::fromUtf8(prg.pc[prg.pak].powersupply.brand.c_str()));


    ui->leModelProce->setText(QString::fromUtf8(prg.pc[prg.pak].processor.model.c_str()));
    ui->leModelgraph->setText(QString::fromUtf8(prg.pc[prg.pak].graphics.model.c_str()));
    ui->leModelram->setText(QString::fromUtf8(prg.pc[prg.pak].ram.model.c_str()));
    ui->leModelstorag->setText(QString::fromUtf8(prg.pc[prg.pak].storage.model.c_str()));
    ui->leModelmother->setText(QString::fromUtf8(prg.pc[prg.pak].motherboard.model.c_str()));
    ui->leModelpower->setText(QString::fromUtf8(prg.pc[prg.pak].powersupply.model.c_str()));


    ui->lePriceproces->setText(QString::number(prg.pc[prg.pak].processor.getprice()));
    ui->lePricegraphi->setText(QString::number(prg.pc[prg.pak].graphics.getprice()));
    ui->lePriceram->setText(QString::number(prg.pc[prg.pak].ram.getprice()));
    ui->lePricestorag->setText(QString::number(prg.pc[prg.pak].storage.getprice()));
    ui->lePricemother->setText(QString::number(prg.pc[prg.pak].motherboard.getprice()));
    ui->lePricepower->setText(QString::number(prg.pc[prg.pak].powersupply.getprice()));
    ui->lefinalprice->setText(QString::number(prg.pc[prg.pak].getprice()));
    ui->lefinalprice->setReadOnly(true);
    ui->leBrandgraph->setReadOnly(true);
    ui->leBrandram->setReadOnly(true);
    ui->leBrandstora->setReadOnly(true);
    ui->leBrandproce->setReadOnly(true);
    ui->leBrandmother->setReadOnly(true);
    ui->leBrandpower->setReadOnly(true);
    ui->leModelgraph->setReadOnly(true);
    ui->leModelram->setReadOnly(true);
    ui->leModelstorag->setReadOnly(true);
    ui->leModelProce->setReadOnly(true);
    ui->leModelmother->setReadOnly(true);
    ui->leModelpower->setReadOnly(true);
    ui->lePricegraphi->setReadOnly(true);
    ui->lePriceram->setReadOnly(true);
    ui->lePricestorag->setReadOnly(true);
    ui->lePriceproces->setReadOnly(true);
    ui->lePricemother->setReadOnly(true);
    ui->lePricepower->setReadOnly(true);

}

void MainWindow::displayprocessors(){
    S2 = "PROCESSOR :";
    S2 = S2+"\n\t_Brand:     "+QString::fromUtf8(prg.pc[prg.pak].processor.brand.c_str());
    S2 = S2+"\n\t_Model:     "+QString::fromUtf8(prg.pc[prg.pak].processor.model.c_str());
    S2 = S2+"\n\t_Cores:     "+QString::number(prg.pc[prg.pak].processor.cores);
    S2 = S2+"\n\t_Threads:   "+QString::number(prg.pc[prg.pak].processor.threads);
    S2 = S2+"\n\t_Price:______________________________________ "+QString::number(prg.pc[prg.pak].processor.getprice());
}
void MainWindow::displaygraphics(){
    S2 = "GRAPHICS :";
    S2 = S2+"\n\t_Brand:     "+QString::fromUtf8(prg.pc[prg.pak].graphics.brand.c_str());
    S2 = S2+"\n\t_Model:     "+QString::fromUtf8(prg.pc[prg.pak].graphics.model.c_str());
    S2 = S2+"\n\t_Memory:    "+QString::fromUtf8(prg.pc[prg.pak].graphics.memory.c_str());
    S2 = S2+"\n\t_Interface: "+QString::fromUtf8(prg.pc[prg.pak].graphics.interface.c_str());
    S2 = S2+"\n\t_ChipSet:   "+QString::fromUtf8(prg.pc[prg.pak].graphics.chipset.c_str());
    S2 = S2+"\n\t_Price:______________________________________ "+QString::number(prg.pc[prg.pak].graphics.getprice());
}
void MainWindow::displayram(){
    S2 = "RAM :";
    S2 = S2+"\n\t_Brand:     "+QString::fromUtf8(prg.pc[prg.pak].ram.brand.c_str());
    S2 = S2+"\n\t_Model:     "+QString::fromUtf8(prg.pc[prg.pak].ram.model.c_str());
    S2 = S2+"\n\t_Type:      "+QString::fromUtf8(prg.pc[prg.pak].ram.type.c_str());
    S2 = S2+"\n\t_Size:      "+QString::number(prg.pc[prg.pak].ram.Rsize);
    S2 = S2+"\n\t_Price:______________________________________ "+QString::number(prg.pc[prg.pak].ram.getprice());
}
void MainWindow::displaystorage(){
    S2 = "STORAGE :";
    S2 = S2+"\n\t_Brand:     "+QString::fromUtf8(prg.pc[prg.pak].storage.brand.c_str());
    S2 = S2+"\n\t_Model:     "+QString::fromUtf8(prg.pc[prg.pak].storage.model.c_str());
    S2 = S2+"\n\t_Interface: "+QString::fromUtf8(prg.pc[prg.pak].storage.interface.c_str());
    S2 = S2+"\n\t_Type:      "+QString::fromUtf8(prg.pc[prg.pak].storage.type.c_str());
    S2 = S2+"\n\t_Cache:     "+QString::fromUtf8(prg.pc[prg.pak].storage.cache.c_str());
    S2 = S2+"\n\t_Capacity:  "+QString::fromUtf8(prg.pc[prg.pak].storage.capacity.c_str());
    S2 = S2+"\n\t_Price:______________________________________ "+QString::number(prg.pc[prg.pak].storage.getprice());
}
void MainWindow::displaymother(){
    S2 = "MOTHERBOARD :";
    S2 = S2+"\n\t_Brand:     "+QString::fromUtf8(prg.pc[prg.pak].motherboard.brand.c_str());
    S2 = S2+"\n\t_Model:     "+QString::fromUtf8(prg.pc[prg.pak].motherboard.model.c_str());
    S2 = S2+"\n\t_Socket:    "+QString::fromUtf8(prg.pc[prg.pak].motherboard.socket.c_str());
    S2 = S2+"\n\t_Chipset:   "+QString::fromUtf8(prg.pc[prg.pak].motherboard.chipset.c_str());
    S2 = S2+"\n\t_Price:______________________________________ "+QString::number(prg.pc[prg.pak].motherboard.getprice());

}
void MainWindow::displaypower(){
    S2 = "POWER-SUPPLY :";
    S2 = S2+"\n\t_Brand:     "+QString::fromUtf8(prg.pc[prg.pak].powersupply.brand.c_str());
    S2 = S2+"\n\t_Model:     "+QString::fromUtf8(prg.pc[prg.pak].powersupply.model.c_str());
    S2 = S2+"\n\t_Power:     "+QString::fromUtf8(prg.pc[prg.pak].powersupply.power.c_str());
    S2 = S2+"\n\t_Price:______________________________________ "+QString::number(prg.pc[prg.pak].powersupply.getprice());

}

void MainWindow::features(){
    if(prg.pc[prg.pak].flag[0]==0)
    {
        S=S+"->Slightly Powerfull Processor\n";
        perks=perks+"->Slightly Powerfull Processor\n";
    }
    if(prg.pc[prg.pak].flag[1]==0)
    {
        S=S+"->Stronger GPU\n";
        perks=perks+"->Stronger GPU\n";
    }
    if(prg.pc[prg.pak].flag[2]==0)
    {

        S=S+"->Larger Ram\n";
        perks=perks+"->Larger Ram\n";
    }
    if(prg.pc[prg.pak].flag[3]==0)
    {
        S=S+"->Better Storage Device\n";
        perks=perks+"->Better Storage Device\n";
    }
    if(prg.pc[prg.pak].flag[4]==0)
    {
        S=S+"->Better Quality Motherboard\n";
        perks=perks+"->Better Quality Motherboard\n";
    }
    if(prg.pc[prg.pak].flag[5]==0)
    {
        S=S+"->More Efficient PowerSource\n";
        perks=perks+"->More Efficient PowerSource\n";
    }


}

void MainWindow::on_bPakage1_clicked()
{
    prg.pak = 1;
    setvalues();
    S="Optimum Package\n\n";
    features();
    ui->display->setText(S);
}


void MainWindow::on_bPakage2_clicked()
{
    prg.pak = 2;
    setvalues();
    S="Package Option 2\n\n";
    features();
    ui->display->setText(S);
}


void MainWindow::on_bPakage3_clicked()
{
    prg.pak = 3;
    setvalues();
    S="Package 3\n\n";
    features();
    ui->display->setText(S);
}


void MainWindow::on_bPakage4_clicked()
{
    prg.pak = 4;
    setvalues();
    S="Choose Already Package\n\n";
    features();
    ui->display->setText(S);
}


void MainWindow::on_bPakage5_clicked()
{
    prg.pak = 5;
    setvalues();
    S="Really?... Package\n\n";
    features();
    ui->display->setText(S);
}


void MainWindow::on_bPakage6_clicked()
{
    prg.pak = 0;
    setvalues();
    S="So you've choose Death!!!...Package\n\n";
    features();
    ui->display->setText(S);
}



void MainWindow::on_bDetailprocessor_clicked()
{
    displayprocessors();
    ui->display->setText(S2);
    S2="";
}


void MainWindow::on_bDetailgraphics_clicked()
{
    displaygraphics();
    ui->display->setText(S2);
    S2="";
}


void MainWindow::on_bDetailram_clicked()
{
    displayram();
    ui->display->setText(S2);
    S2="";

}


void MainWindow::on_bDetailstore_clicked()
{
    displaystorage();
    ui->display->setText(S2);
    S2="";
}


void MainWindow::on_bDetailmother_clicked()
{
    displaymother();
    ui->display->setText(S2);
    S2="";
}


void MainWindow::on_bDetailpower_clicked()
{
    displaypower();
    ui->display->setText(S2);
    S2="";
    perks="";
}


void MainWindow::on_bDetailram_2_clicked()
{
    QString Temp;
    Temp=S;
    S = S2;
    S=S+"\nTHIS PACKAGE WILL COST YOU :_________________________________ ";
    S=S+QString::number(prg.pc[prg.pak].getprice());
    S=S+"\n\n";
    displayprocessors();
    S = S+S2+"\n\n";
    displaygraphics();
    S = S+S2+"\n\n";
    displayram();
    S = S+S2+"\n\n";
    displaystorage();
    S = S+S2+"\n\n";
    displaymother();
    S = S+S2+"\n\n";
    displaypower();
    S = S+S2+"\n\n";
    S=S+"\n----------------------------------------------------------------------------\n";
    S=S+"Perks:\n";
    S=S+perks;
    ui->display->setText(S);

    S = Temp;
    perks = "";
    S2="";
}

