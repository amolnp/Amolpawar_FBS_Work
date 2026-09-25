#include <stdio.h>

typedef struct Student
{
    int rollNo;
    char name[30];
    int marks;
} Student;

void store(Student *s, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }
}

void display(Student *s, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("\nStudent %d", i + 1);
        printf("\nRoll No: %d", s[i].rollNo);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %d\n", s[i].marks);
    }
}

typedef struct Employee
{
    int id;
    char name[30];
    float salary;
} Employee;

void storeEmployee(Employee *e)
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &e->id);

    printf("Enter Employee Name: ");
    scanf("%s", e->name);

    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

void displayEmployee(Employee *e)
{
    printf("\nEmployee ID: %d", e->id);
    printf("\nEmployee Name: %s", e->name);
    printf("\nSalary: %.2f\n", e->salary);
}

typedef struct Admin
{
    int id;
    char name[30];
    float salary;
    float allowance;
} Admin;
void storeAdmin(Admin *a)
{
    printf("\nEnter Admin ID: ");
    scanf("%d", &a->id);

    printf("Enter Admin Name: ");
    scanf("%s", a->name);

    printf("Enter Salary: ");
    scanf("%f", &a->salary);

    printf("Enter Allowance: ");
    scanf("%f", &a->allowance);
}
void displayAdmin(Admin *a)
{
    printf("\nAdmin ID: %d", a->id);
    printf("\nAdmin Name: %s", a->name);
    printf("\nSalary: %.2f", a->salary);
    printf("\nAllowance: %.2f\n", a->allowance);
}

typedef struct HR
{
    int id;
    char name[30];
    float salary;
    float commission;
} HR;
void storeHR(HR *h)
{
    printf("\nEnter HR ID: ");
    scanf("%d", &h->id);

    printf("Enter HR Name: ");
    scanf("%s", h->name);

    printf("Enter Salary: ");
    scanf("%f", &h->salary);

    printf("Enter Commission: ");
    scanf("%f", &h->commission);
}
void displayHR(HR *h)
{
    printf("\nHR ID: %d", h->id);
    printf("\nHR Name: %s", h->name);
    printf("\nSalary: %.2f", h->salary);
    printf("\nCommission: %.2f\n", h->commission);
}

typedef struct SalesManager
{
    int id;
    char name[30];
    float salary;
    float incentive;
    int target;
} SalesManager;
void storeSalesManager(SalesManager *sm)
{
    printf("\nEnter Sales Manager ID: ");
    scanf("%d", &sm->id);

    printf("Enter Sales Manager Name: ");
    scanf("%s", sm->name);

    printf("Enter Salary: ");
    scanf("%f", &sm->salary);

    printf("Enter Incentive: ");
    scanf("%f", &sm->incentive);

    printf("Enter Target: ");
    scanf("%d", &sm->target);
}
void displaySalesManager(SalesManager *sm)
{
    printf("\nSales Manager ID: %d", sm->id);
    printf("\nSales Manager Name: %s", sm->name);
    printf("\nSalary: %.2f", sm->salary);
    printf("\nIncentive: %.2f", sm->incentive);
    printf("\nTarget: %d\n", sm->target);
}

typedef struct Date
{
    int date;
    int month;
    int year;
} Date;
void storeDate(Date *d)
{
    printf("\nEnter Date: ");
    scanf("%d", &d->date);

    printf("Enter Month: ");
    scanf("%d", &d->month);

    printf("Enter Year: ");
    scanf("%d", &d->year);
}
void displayDate(Date *d)
{
    printf("\nDate: %02d/%02d/%d\n",
           d->date,
           d->month,
           d->year);
}

typedef struct Time
{
    int hour;
    int min;
    int sec;
} Time;
void storeTime(Time *t)
{
    printf("\nEnter Hour: ");
    scanf("%d", &t->hour);

    printf("Enter Minute: ");
    scanf("%d", &t->min);

    printf("Enter Second: ");
    scanf("%d", &t->sec);
}
void displayTime(Time *t)
{
    printf("\nTime: %02d:%02d:%02d\n",
           t->hour,
           t->min,
           t->sec);
}

typedef struct Distance
{
    int feet;
    int inch;
} Distance;
void storeDistance(Distance *d)
{
    printf("\nEnter Feet: ");
    scanf("%d", &d->feet);

    printf("Enter Inch: ");
    scanf("%d", &d->inch);
}
void displayDistance(Distance *d)
{
    printf("\nDistance: %d feet %d inch\n",
           d->feet,
           d->inch);
}

typedef struct Complex
{
    float real;
    float imaginary;
} Complex;
void storeComplex(Complex *c)
{
    printf("\nEnter Real Part: ");
    scanf("%f", &c->real);

    printf("Enter Imaginary Part: ");
    scanf("%f", &c->imaginary);
}
void displayComplex(Complex *c)
{
    printf("\nComplex Number: %.2f + %.2fi\n",
           c->real,
           c->imaginary);
}
typedef struct Product
{
    int id;
    char name[30];
    int quantity;
    float price;
} Product;
void storeProduct(Product *p)
{
    printf("\nEnter Product ID: ");
    scanf("%d", &p->id);

    printf("Enter Product Name: ");
    scanf("%s", p->name);

    printf("Enter Quantity: ");
    scanf("%d", &p->quantity);

    printf("Enter Price: ");
    scanf("%f", &p->price);
}
void displayProduct(Product *p)
{
    printf("\nProduct ID: %d", p->id);
    printf("\nProduct Name: %s", p->name);
    printf("\nQuantity: %d", p->quantity);
    printf("\nPrice: %.2f\n", p->price);
}


int main()
{
    Student sarr[3];

    store(sarr, 3);
    display(sarr, 3);
    Employee e;

    storeEmployee(&e);
    displayEmployee(&e);    
    Admin a;

    storeAdmin(&a);
    displayAdmin(&a);
    
    HR h;

    storeHR(&h);
    displayHR(&h);
    
    SalesManager sm;

    storeSalesManager(&sm);
    displaySalesManager(&sm);
    
    Date d;

    storeDate(&d);
    displayDate(&d);
    
    Time t;

    storeTime(&t);
    displayTime(&t);
    
    Distance dis;

    storeDistance(&dis);
    displayDistance(&dis);
    
    Complex c;

    storeComplex(&c);
    displayComplex(&c);
    
    Product p;

    storeProduct(&p);
    displayProduct(&p);
}