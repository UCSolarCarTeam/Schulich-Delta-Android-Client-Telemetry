#include "MpptUI.h"
#include "ui_MpptUI.h"

MpptUI::MpptUI()
: ui(new Ui::MpptUI)
{  
   ui->setupUi(this);
}

MpptUI::~MpptUI()
{  
   delete ui;
} 

void MpptUI::hideHeaderBar()
{  
   ui->mpptTitleBar->hide();
}

QLabel& MpptUI::setMppt1PowerIn()
{  
   return *ui->mppt1PowerIn;  
}
QLabel& MpptUI::setMppt1VoltageIn()
{  
   return *ui->mppt1VoltageIn;   
}
QLabel& MpptUI::setMppt1CurrentIn()
{  
   return *ui->mppt1CurrentIn;   
}
QLabel& MpptUI::setMppt1PowerOut()
{  
   return *ui->mppt1PowerOut; 
}
QLabel& MpptUI::setMppt1VoltageOut()
{  
   return *ui->mppt1VoltageOut;  
}
QLabel& MpptUI::setMppt1CurrentOut()
{  
   return *ui->mppt1CurrentOut;  
}
QLabel& MpptUI::setPower1PowerValue()
{  
   return *ui->power1PowerValue; 
}
QLabel& MpptUI::setPower1VoltageValue()
{  
   return *ui->power1VoltageValue;  
}
QLabel& MpptUI::setPower1CurrentValue()
{  
   return *ui->power1CurrentValue;  
}
QLabel& MpptUI::setMppt1Efficiency()
{  
   return *ui->mppt1Efficiency;  
}

QLabel& MpptUI::setMppt2PowerIn()
{  
   return *ui->mppt2PowerIn;  
}
QLabel& MpptUI::setMppt2VoltageIn()
{  
   return *ui->mppt2VoltageIn;   
}
QLabel& MpptUI::setMppt2CurrentIn()
{  
   return *ui->mppt2CurrentIn;   
}
QLabel& MpptUI::setMppt2PowerOut()
{  
   return *ui->mppt2PowerOut; 
}
QLabel& MpptUI::setMppt2VoltageOut()
{  
   return *ui->mppt2VoltageOut;  
}
QLabel& MpptUI::setMppt2CurrentOut()
{  
   return *ui->mppt2CurrentOut;  
}
QLabel& MpptUI::setPower2PowerValue()
{  
   return *ui->power2PowerValue; 
}
QLabel& MpptUI::setPower2VoltageValue()
{  
   return *ui->power2VoltageValue;  
}
QLabel& MpptUI::setPower2CurrentValue()
{  
   return *ui->power2CurrentValue;  
}
QLabel& MpptUI::setMppt2Efficiency()
{  
   return *ui->mppt2Efficiency;  
}

QLabel& MpptUI::setMppt3PowerIn()
{  
   return *ui->mppt3PowerIn;  
}
QLabel& MpptUI::setMppt3VoltageIn()
{  
   return *ui->mppt3VoltageIn;   
}
QLabel& MpptUI::setMppt3CurrentIn()
{  
   return *ui->mppt3CurrentIn;   
}
QLabel& MpptUI::setMppt3PowerOut()
{  
   return *ui->mppt3PowerOut; 
}
QLabel& MpptUI::setMppt3VoltageOut()
{  
   return *ui->mppt3VoltageOut;  
}
QLabel& MpptUI::setMppt3CurrentOut()
{  
   return *ui->mppt3CurrentOut;  
}
QLabel& MpptUI::setPower3PowerValue()
{  
   return *ui->power3PowerValue; 
}
QLabel& MpptUI::setPower3VoltageValue()
{  
   return *ui->power3VoltageValue;  
}
QLabel& MpptUI::setPower3CurrentValue()
{  
   return *ui->power3CurrentValue;  
}
QLabel& MpptUI::setMppt3Efficiency()
{  
   return *ui->mppt3Efficiency;  
}

QLabel& MpptUI::setMppt4PowerIn()
{  
   return *ui->mppt4PowerIn;  
}
QLabel& MpptUI::setMppt4VoltageIn()
{  
   return *ui->mppt4VoltageIn;   
}
QLabel& MpptUI::setMppt4CurrentIn()
{  
   return *ui->mppt4CurrentIn;   
}
QLabel& MpptUI::setMppt4PowerOut()
{  
   return *ui->mppt4PowerOut; 
}
QLabel& MpptUI::setMppt4VoltageOut()
{  
   return *ui->mppt4VoltageOut;  
}
QLabel& MpptUI::setMppt4CurrentOut()
{  
   return *ui->mppt4CurrentOut;  
}
QLabel& MpptUI::setPower4PowerValue()
{  
   return *ui->power4PowerValue; 
}
QLabel& MpptUI::setPower4VoltageValue()
{  
   return *ui->power4VoltageValue;  
}
QLabel& MpptUI::setPower4CurrentValue()
{  
   return *ui->power4CurrentValue;  
}
QLabel& MpptUI::setMppt4Efficiency()
{  
   return *ui->mppt4Efficiency;  
}

QLabel& MpptUI::setMppt5PowerIn()
{  
   return *ui->mppt5PowerIn;  
}
QLabel& MpptUI::setMppt5VoltageIn()
{  
   return *ui->mppt5VoltageIn;   
}
QLabel& MpptUI::setMppt5CurrentIn()
{  
   return *ui->mppt5CurrentIn;   
}
QLabel& MpptUI::setMppt5PowerOut()
{  
   return *ui->mppt5PowerOut; 
}
QLabel& MpptUI::setMppt5VoltageOut()
{  
   return *ui->mppt5VoltageOut;  
}
QLabel& MpptUI::setMppt5CurrentOut()
{  
   return *ui->mppt5CurrentOut;  
}
QLabel& MpptUI::setPower5PowerValue()
{  
   return *ui->power5PowerValue; 
}
QLabel& MpptUI::setPower5VoltageValue()
{  
   return *ui->power5VoltageValue;  
}
QLabel& MpptUI::setPower5CurrentValue()
{  
   return *ui->power5CurrentValue;  
}
QLabel& MpptUI::setMppt5Efficiency()
{  
   return *ui->mppt5Efficiency;  
}

QLabel& MpptUI::setMppt6PowerIn()
{  
   return *ui->mppt6PowerIn;  
}
QLabel& MpptUI::setMppt6VoltageIn()
{  
   return *ui->mppt6VoltageIn;   
}
QLabel& MpptUI::setMppt6CurrentIn()
{  
   return *ui->mppt6CurrentIn;   
}
QLabel& MpptUI::setMppt6PowerOut()
{  
   return *ui->mppt6PowerOut; 
}
QLabel& MpptUI::setMppt6VoltageOut()
{  
   return *ui->mppt6VoltageOut;  
}
QLabel& MpptUI::setMppt6CurrentOut()
{  
   return *ui->mppt6CurrentOut;  
}
QLabel& MpptUI::setPower6PowerValue()
{  
   return *ui->power6PowerValue; 
}
QLabel& MpptUI::setPower6VoltageValue()
{  
   return *ui->power6VoltageValue;  
}
QLabel& MpptUI::setPower6CurrentValue()
{  
   return *ui->power6CurrentValue;  
}
QLabel& MpptUI::setMppt6Efficiency()
{  
   return *ui->mppt6Efficiency;  
}

QLabel& MpptUI::setMppt7PowerIn()
{  
   return *ui->mppt7PowerIn;  
}
QLabel& MpptUI::setMppt7VoltageIn()
{  
   return *ui->mppt7VoltageIn;   
}
QLabel& MpptUI::setMppt7CurrentIn()
{  
   return *ui->mppt7CurrentIn;   
}
QLabel& MpptUI::setMppt7PowerOut()
{  
   return *ui->mppt7PowerOut; 
}
QLabel& MpptUI::setMppt7VoltageOut()
{  
   return *ui->mppt7VoltageOut;  
}
QLabel& MpptUI::setMppt7CurrentOut()
{  
   return *ui->mppt7CurrentOut;  
}
QLabel& MpptUI::setPower7PowerValue()
{  
   return *ui->power7PowerValue; 
}
QLabel& MpptUI::setPower7VoltageValue()
{  
   return *ui->power7VoltageValue;  
}
QLabel& MpptUI::setPower7CurrentValue()
{  
   return *ui->power7CurrentValue;  
}
QLabel& MpptUI::setMppt7Efficiency()
{  
   return *ui->mppt7Efficiency;  
}