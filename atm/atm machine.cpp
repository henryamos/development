 #include<iostream>
using namespace std;
//// Variables to be used //



int uniqueId,pin=1234,pinCode, userID=4321;
int initialAmount=1000, withDrawal, balance, transferAmount, currentAccount,choice,deposit,depositAccount,oldPin,newPin, again;
void logIn();
void question();
void withDraw();
void transfer();
void depositAmount();
void resetPin();
void performAgain();

int main(){
	logIn();
	question();
	performAgain();
	return 0;

}

///This is login validation//
void logIn(){
	uniqueId=userID;
	pinCode=pin;
	home:
	cout<<"-------WELCOME TO HAB BANK-----------"<<endl;

cout<<" Enter your User ID: ";
	cin>>uniqueId;
	cout<<"Enter your pincode: ";
	cin>>pinCode;
	if(pinCode==pin && userID==uniqueId ){
		cout<<"login successful your current account: "<<initialAmount<<"cedis"<<endl;
		cout<<endl;
	}
	else
	{
	cout<<"Wrong Password"<<endl;
	cout<<"Please try again \n ";
	goto home;
	}
}
///request//
 void question(){
	wrongInput:
	cout<<"What transcation do you want to perform"<<endl;
	cout<<endl;
	cout<<"Select the options below :"<<endl;
	cout<<endl;
	cout<<"1.Withdraw Money\n 2.Transfer Money\n 3.Deposit Money\n 4.Reset Pin\n"<<endl;
	cin>>choice;
	if(choice==1){
		withDraw();
	}
	else if(choice==2){
		transfer();
	}
	else if (choice==3){
		depositAmount();

	}else if(choice==4){
		resetPin();
	}
	else{
		choice>5;
		cout<<"Invalid Input"<<endl;
		goto wrongInput;

		performAgain();
	}
}
/// Withdrawal//
void withDraw(){
	balance=initialAmount-withDrawal;
    currentAccount= balance;
	withdraw:
	cout<<"How much do you want to withdraw "<<endl;
	cout<<"Enter the amount: ";
	cin>>withDrawal;
	if(withDrawal>initialAmount){
	  cout<<"Your withdrawal can't exceed the your balance"<<endl;
	  cout<<"Try again to withdraw amount less"<<endl;
	       goto withdraw;
	}
	else if ( withDrawal==initialAmount){
		cout<<"You can't withdraw all your money in amount"<<endl;
		 goto withdraw;
	}
	else{
	      withDrawal<initialAmount;
		balance=initialAmount-withDrawal;
		cout<<"------------RECIEPT------------"<<endl;
		cout<<"Initial Account Balance: "<<initialAmount<<"cedis"<<endl;
		cout<<"WithdrawalAmount: "<<withDrawal<<"cedis"<<endl;
		cout<<"Current Balance: "<<balance<<"cedis"<<endl;
		cout<<"--Thanks for banking with HAB BANK--"<<endl;
		cout<<"------Have A Good Day---------"<<endl;
		performAgain();
		}

}
////transfer//
void transfer(){
	     home:
	   cout<<"How much do you want to transfer"<<endl;
	   cout<<"Enter the amount you want to transfer: ";
	   cin>>transferAmount;
	   balance=currentAccount;
	   if(transferAmount>initialAmount){
	  cout<<"Your withdrawal can't exceed the your balance"<<endl;
	  cout<<"Try again to transfer amount less"<<endl;
	       goto home;
	}
	else if ( transferAmount==initialAmount){
		cout<<"You can't transfer all your money in account"<<endl;
		 goto home;
	}
	else{
	      transferAmount<initialAmount;
		currentAccount=initialAmount-transferAmount;
	   cout<<"------------RECIEPT------------"<<endl;
		cout<<"Initial Account Balance: "<<initialAmount<<"cedis"<<endl;
		cout<<"Amount transferred: "<<transferAmount<<"cedis"<<endl;
		cout<<"Current Balance: "<<currentAccount<<"cedis"<<endl;
		cout<<"--Thanks for banking with HAB BANK--"<<endl;
		cout<<"------Have A Good Day---------"<<endl;
    }

}
void depositAmount(){
	cout<<"Enter amount you want to deposit"<<endl;
	cin>>deposit;
	depositAccount=initialAmount+deposit;
	initialAmount=depositAccount;
	 cout<<"------------RECIEPT------------"<<endl;
		cout<<"Initial Account Balance: "<<initialAmount<<"cedis"<<endl;
		cout<<"Amount deposited: "<<deposit<<"cedis"<<endl;
		cout<<"Current Balance: "<<depositAccount<<"cedis"<<endl;
		cout<<"--Thanks for banking with HAB BANK--"<<endl;
		cout<<"------Have A Good Day---------"<<endl;
		performAgain();
}
void resetPin(){
	reset:
	cout<<"Enter old Pin: ";
	cin>>oldPin;
	if(oldPin!=pin){
		cout<<"Incorrect Old Pin: ";
	   goto	reset;
	}else{
		oldPin==pin;
		cout<<"Enter your new pin: ";
		cin>>newPin;
		pin=newPin;
		cout<<"This your new pin: "<<newPin<<endl;
		performAgain();
	}
}
void performAgain(){
	cout<<"Do you want to perform transaction again"<<endl;
	cout<<"Press 1 to continue or 2 exit"<<endl;
	cin>>again;
	if (again==1){
	  question();

	}else{
		again==2;
		cout<<"Thank you for banking us"<<endl;
	}


}
