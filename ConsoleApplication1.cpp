if (Re < 2300)
{
    I = 64.0 / Re;
}
else
{
    I = 0.3 / pow(Re, 0.25);
}
double h = I * (L / (d * 19.6));
double H = Hg + h + 5;
cout << "\nРезультаты расчётов: " << endl;
cout << "Подача насоса (Q) = " << Q << " л/час " << endl;
cout << "Требуемый напор (H)" << H << " м " << endl;
return 0;
}