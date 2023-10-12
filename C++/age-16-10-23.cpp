#include <iostream>
using namespace std;

float ageK, ageM, m_v, tmp; 

int main()
{
	cout<<"Введите возраст Коли и Миши: "<<endl;
	cin>>ageK>>ageM;
	m_v = (ageK + ageM)/2;
}	cout<<"Их средний возраст: "<<m_v<<endl;
	tmp = m_v;
	m_v -= ageK;
	cout<<"Возраст Коли отличается от среднего на "<<m_v<<endl;
	m_v = tmp;
	m_v -= ageM;
	cout<<"Возраст Миши отличается от среднего на "<<m_v<<endl;

	return 0;
