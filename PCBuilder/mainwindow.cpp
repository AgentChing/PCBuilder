#include "mainwindow.h"
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
        exc=1;
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
        exc=1;
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
        exc=1;
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
        exc=1;
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
        exc=1;
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
    while(budget<sum)
    {
        addbinary(bench);
        sum= processor[i-bench[0]].getprice()+graphics[i-bench[1]].getprice()+ram[i-bench[2]].getprice()+storage[i-bench[3]].getprice()+motherboard[i-bench[4]].getprice()+powersupply[i-bench[5]].getprice();
    }
    cout<<endl<<i<<" "<<arr[i]<<endl;
    for(int i=0;i<6;i++)
        cout<<bench[i]<<" ";
    cout<<endl<<sum<<endl;

    pc->processor.brand = processor[i-bench[0]].brand;
    pc->processor.model = processor[i-bench[0]].model;
    pc->processor.setprice(processor[i-bench[0]].getprice());
    pc->processor.cores= processor[i-bench[0]].cores;
    pc->processor.threads= processor[i-bench[0]].threads;
    pc->ram.brand=ram[i-bench[2]].brand;
    pc->ram.model=ram[i-bench[2]].model;
    pc->ram.setprice(ram[i-bench[2]].getprice());
    pc->ram.type=ram[i-bench[2]].type;
    pc->ram.Rsize=ram[i-bench[2]].Rsize;
    pc->storage.brand=storage[i-bench[3]].brand;
    pc->storage.model=storage[i-bench[3]].model;
    pc->storage.setprice(storage[i-bench[3]].getprice());
    pc->storage.interface=storage[i-bench[3]].interface;
    pc->storage.type=storage[i-bench[3]].type;
    pc->storage.cache=storage[i-bench[3]].cache;
    pc->storage.capacity=storage[i-bench[3]].capacity;
    pc->graphics.brand=graphics[i-bench[1]].brand;
    pc->graphics.model=graphics[i-bench[1]].model;
    pc->graphics.setprice(graphics[i-bench[1]].getprice());
    pc->graphics.memory=graphics[i-bench[1]].memory;
    pc->graphics.interface=graphics[i-bench[1]].interface;
    pc->graphics.chipset=graphics[i-bench[1]].chipset;
    pc->motherboard.brand=motherboard[i-bench[4]].brand;
    pc->motherboard.model=motherboard[i-bench[4]].model;
    pc->motherboard.setprice(motherboard[i-bench[4]].getprice());
    pc->motherboard.socket=motherboard[i-bench[4]].socket;
    pc->motherboard.chipset=motherboard[i-bench[4]].chipset;
    pc->powersupply.brand= powersupply[i-bench[5]].brand;
    pc->powersupply.model= powersupply[i-bench[5]].model;
    pc->powersupply.setprice(powersupply[i-bench[5]].getprice());
    pc->powersupply.power=powersupply[i-bench[5]].power;
    pc->setprice(sum);
}

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
    PC pc;
    QString min, max;


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
            ui->display->setText("GENERATING BENCHMARKS");
            generate_benchmark(prg.processor,prg.ram,prg.storage,prg.graphics,prg.motherboard,prg.powersupply,prg.arra);
            prg.min = QString::number(prg.arra[0]);
            prg.max = QString::number(prg.arra[19]);
            ui->leMinprice->setText(prg.min);
            ui->leMaxprice->setText(prg.max);
            ui->leMinprice->setReadOnly(true);
            ui->leMaxprice->setReadOnly(true);





}

MainWindow::~MainWindow()
{
    delete ui;
}

void runprogram(){


}

void MainWindow::on_bPakage1_clicked()
{

}


void MainWindow::on_bBuild_clicked()
{
    prg.budget = ui->leBudget->text().toInt();
    int min;
   //max = ui->leMaxprice->text().toInt();
    min = ui->leMinprice->text().toInt();
    if(prg.budget<min)
    {
        ui->display->setText("Insufficient Amount:\n You Broke, Bitch!!!");
    }
    else{
        QString s = QString::number(prg.budget);
        build_pc(&prg.pc,prg.processor,prg.graphics,prg.ram,prg.storage,prg.motherboard,prg.powersupply,prg.arra,prg.budget);
        ui->display->setText("Models ready");
        ui->leBrandproce->setText(QString::fromUtf8(prg.pc.processor.brand.c_str()));
        ui->leBrandgraph->setText(QString::fromUtf8(prg.pc.graphics.brand.c_str()));
        ui->leBrandram->setText(QString::fromUtf8(prg.pc.ram.brand.c_str()));
        ui->leBrandstora->setText(QString::fromUtf8(prg.pc.storage.brand.c_str()));
        ui->leBrandmother->setText(QString::fromUtf8(prg.pc.motherboard.brand.c_str()));
        ui->leBrandpower->setText(QString::fromUtf8(prg.pc.powersupply.brand.c_str()));


        ui->leModelProce->setText(QString::fromUtf8(prg.pc.processor.model.c_str()));
        ui->leModelgraph->setText(QString::fromUtf8(prg.pc.graphics.model.c_str()));
        ui->leModelram->setText(QString::fromUtf8(prg.pc.ram.model.c_str()));
        ui->leModelstorag->setText(QString::fromUtf8(prg.pc.storage.model.c_str()));
        ui->leModelmother->setText(QString::fromUtf8(prg.pc.motherboard.model.c_str()));
        ui->leModelpower->setText(QString::fromUtf8(prg.pc.powersupply.model.c_str()));


        ui->lePriceproces->setText(QString::number(prg.pc.processor.getprice()));
        ui->lePricegraphi->setText(QString::number(prg.pc.graphics.getprice()));
        ui->lePriceram->setText(QString::number(prg.pc.ram.getprice()));
        ui->lePricestorag->setText(QString::number(prg.pc.storage.getprice()));
        ui->lePricemother->setText(QString::number(prg.pc.motherboard.getprice()));
        ui->lePricepower->setText(QString::number(prg.pc.powersupply.getprice()));
        ui->lefinalprice->setText(QString::number(prg.pc.getprice()));
        //showpc(prg.pc);

    }

}

