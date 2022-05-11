#include<iostream> 
#include<string.h> 
using namespace std;
class Account
{
public:
	Account(char name[], long num, float amount,int year, int moth, int day); 	//类的有参构造函数 
	Account(); 										//类的无参构造函数
	//账户的开户时间
	void show ()
	{
      cout << "开户时间为：" << _year << "年" << _moth << "月" << _day << "日" << endl;
	}
	void deposit(float amount);			//往当前账户中存款 
	int withdraw(float amount);			//从当前账户中取款 
	float getBalance(); 				//查询当前账户的余额 
private:
	char mName[20]; 			//银行账户的户名 
	long mSN; 					//本账户的帐号 
	float mBalance; 			//本账户当前的余额
	int _year;
	int _moth;
	int _day;
};
//类的有参构造函数
Account::Account(char name[], long num, float amount,int year, int moth, int day)
{
	strcpy(mName, name);      //字符串复制函数
	mSN = num;
	mBalance = amount;
	_year = year;
	_moth = moth;
	_day = day;
}
//类的无参构造函数 
Account::Account()
{
	cout << "无参函数被调用！" << endl;
}

//往当前账户中存款 
void Account::deposit(float amount)
{
	mBalance = mBalance + amount;
}
//从当前账户中取款 
int Account::withdraw(float amount)
{
	if (amount > mBalance)
	{
		return 0;
	}
	else if (amount <= mBalance)
	{
		mBalance = mBalance - amount; 
		return 1;              //return 1代表函数非正常终止
	}
}
//查询当前账户的余额
float Account::getBalance()
{
	return mBalance;
}
//主函数
int main()
{
	int NO, m;
	char name[20];
	long num;
	float amount;
	int year;
	int moth;
	int day;
	cout<< "请输入开户时间：";
	cout << "年份:";
	cin >> year;
	cout << "月份:";
	cin >> moth;
	cout << "号数:";
	cin >> day;
	cout << "请输入所开账户户名：";
	cin >> name;
	cout << "请输入所开账户帐号：";
	cin >> num; 
	cout << "请输入所开账户初始存款金额：";
	cin >> amount;
	Account A(name, num, amount,year, moth, day);

	cout << "" << endl;
	cout << "------------------------------------------------"<<endl;
	cout << "                   菜单栏                       "<<endl;
	cout << "1、存款请输入“1”"<<endl;
	cout << ""<<endl;
	cout << "2、取款请输入“2”"<<endl;
	cout << ""<<endl;
	cout << "3、查询账户余额请输入“3”"<<endl;
	cout << ""<<endl;
	cout << "4、退出请输入“4”"<<endl;
	cout << ""<<endl;
	cout << "5、开户日期请输入“5”"<<endl;
	cout << ""<<endl;
	cout << "------------------------------------------------"<<endl;
	while (1)
	{
		cout << "请输入选择:" << endl;
		cin >> NO;	
		switch (NO)         //通过switch循环来判断输入的菜单栏选择对应其相应的操作
		{	
		case 1: 
			cout << "请输入存款金额：";
			cin >> amount;
			A.deposit(amount);
			break;								//表示跳出该switch语句体
		case 2: 
			cout << "请输入取款金额：";
			cin >> amount;
			m = A.withdraw(amount);
			if (m == 0) 
				cout << "当前账户余额不足！" << endl;
			else 
				cout << "取款成功！" << endl;
			break; 
		case 3: 
			cout << "当前账户余额为：" << A.getBalance() << endl;
			break;
		case 4: 
			cout << "账户已退出！" <<endl;
			
			return 0;
		default:
			cout << "输入错误！"<< endl;			//判断输入菜单栏是否输入正确
			exit(0);
		case 5:
			A.show();
			break;
		}
		cout << "" <<endl;
	}
}

