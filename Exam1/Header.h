#pragma once
void task_1() {
	int value, sum=0, multip=1;
	cout << "Введите четырехзначное число:";
	cin >> value;
	while (value != 0) {
		sum += value % 10;
		multip *= (value % 10);
		value /= 10;
	}
	cout << "Сумма: " << sum << endl << "Произведение: " << multip;
}
void task_2() {
	int value, counter100 = 0, counter1000 = 0, copycounter100 = 0;
	cout << "Введите число больше 999:";
	cin >> value;
	value -= 100;
	while (value > 0) {
		counter100++;
		copycounter100++;
		if (counter100 == 10) {
			counter1000++;
			counter100 = 0;
		}
		value -= 100;
	}
	cout << "Сотен: " << copycounter100 << endl << "Тысяч: " << counter1000;
}
void task_3() {
	int value, max;
	cout << "Введите трехзначное число:";
	cin >> value;
	max = value % 10;
	value /= 10;
	while (value != 0) {
		if (max < value % 10) {
			max = value % 10;
		}
		value /= 10;
	}
	cout << "Максимальная цифра: " << max;
}
void task_4() {
	int value, sum=0, copyvalue;
	cout << "Введите трехзначное число:";
	cin >> value;
	copyvalue = value;
	while (value != 0) {
		sum += pow((value % 10), 3);
		value /= 10;
	}
	if (sum == pow(copyvalue, 2)) cout << "Да равен";
	else cout << "Нет не равен";
}
void task_5() {
	int value;
	cout << "Введите номер месяца: ";
	cin >> value;
	switch (value)
	{
	case 1:
		cout << "Январь";
		break;
	case 2:
		cout << "Февраль";
		break;
	case 3:
		cout << "Март";
		break;
	case 4:
		cout << "Апрель";
		break;
	case 5:
		cout << "Май";
		break;
	case 6:
		cout << "Июнь";
		break;
	case 7:
		cout << "Июль";
		break;
	case 8:
		cout << "Август";
		break;
	case 9:
		cout << "Сентябрь";
		break;
	case 10:
		cout << "Октябрь";
		break;
	case 11:
		cout << "Ноябрь";
		break;
	case 12:
		cout << "Декабрь";
		break;
	default:
		cout << "Такого месяца нет";
		break;
	}
}
void task_6() {
	int value, sum = 0;
	cout << "Введите шестизначное число:";
	cin >> value;
	while (value != 0) {
		sum += value % 10;
		value /= 10;
	}
	cout << "Сумма чисел равна: " << sum;
}
void task_7() {
	int value, sum = 0, counter = 0;
	cout << "Введите число для выхода нажмите '0': ";
	cin >> value;
	int x = 5;
	while (value != 0) {
		if (value > x) sum += value;
		if (value % 2 == 0) counter++;
		cout << "Введите число для выхода нажмите '0': ";
		cin >> value;
	}
	cout << "сумма чисел больше 5 равна: " << sum << endl << "Число четных чисел равно: " << counter;
}
void task_8() {
	int max = 0;
	for (int i = 0; i <= 5000; i++) {
		if ((i % 39) == 0 && i > max) {
			max = i;
		}
	}
	cout << "Максимальное число делящееся на 39: " << max;
}
void task_9() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i < j) cout << " ";
			else cout << "5";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 4; j >= 0 ; j--) {
			if (i < j) cout << " ";
			else cout << "1";
		}
		cout << endl;
	}
}
void task_10() {
	string str;
	cout << "Введите предложение: ";
	getline(cin, str);
	int counter = 0, countermax = 0, counterspace = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			counterspace++;
			counter++;
		}
		else counterspace = 0;
		if (countermax < counterspace) countermax = counterspace;
	}
	cout << "количество пробелов: " << counter << endl << "Подряд пробелов: " << countermax;
}
void task_11() {
	for (int i = 0; i < 80; i++) {
		cout << "*";
	}
}
void task_12() {
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int copyarr[size];
	for (int i = 0; i < size; i++) {
		copyarr[i] = arr[i];
	}
	for (int i = 0; i < size; i++) {
		copyarr[i] -= 20;
	}
	for (int i = 0; i < size; i++) {
		cout << copyarr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		copyarr[i] = arr[i];
	}
	for (int i = 0; i < size; i++) {
		copyarr[i] *= copyarr[size-1];
	}
	for (int i = 0; i < size; i++) {
		cout << copyarr[i] << " ";
	}
	cout << endl;
	int b;
	cout << "Введите число на которое нужно увеличить элементы массива: ";
	cin >> b;
	for (int i = 0; i < size; i++) {
		arr[i] *= b;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void task_13() {
	const int row = 10, colomn = 8;
	int counter = 0;
	int matrix[row][colomn];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colomn; j++) {
			matrix[i][j] = rand() % (5 - 1 + 1) + 1;
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colomn; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colomn; j++) {
			if (matrix[i][j] == 4 || matrix[i][j] == 5) counter++;
		}
	}
	cout << "Общее количество 4 и 5 равно: " << counter;
}
void task_14() {
	const int size = 10;
	int arr[size], temp;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	temp = arr[1];
	arr[1] = arr[4];
	arr[4] = temp;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int m, n;
	cout << "Введите индекс элемента который хотите поменять от 1 до 10: ";
	cin >> m;
	cout << "Введите индекс элемента который хотите поменять от 1 до 10: ";
	cin >> n;
	temp = arr[m - 1];
	arr[m - 1] = arr[n - 1];
	arr[n - 1] = temp;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
void task_15() {
	const int row = 5, colomn = 6;
	int matrix[row][colomn]{};
	int temp, counter = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colomn; j++) {
			temp = rand() % 100;
			for (int k = 0; k < row; k++) {
				for (int l = 0; l < colomn; l++) {
					if (temp == matrix[k][l]) counter++;
				}
			}
			if (counter == 0) matrix[i][j] = temp;
			else {
				counter = 0;
				if (j != 0) j--;
				else {
					i--;
					j = colomn - 1;
				}
			}
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colomn; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void task_17() {
	ofstream out("text.txt", ios::out);
	string str;
	cout << "Введите целые числа: ";
	getline(cin, str);
	if (out.is_open()) {
		out << str;
		out.close();
	}
	else cout << "Error openfile.";
	int size = str.size();
	char* arr = new char[size];
	ifstream in("text.txt");
	if (in.is_open()) {
		for (int i = 0; i < size; i++) {
			in >> arr[i];
		}
		in.close();
	}
	else cout << "Error openfile.";
	out.open("text1.txt", ios::out);
	if (out.is_open()) {
		for (int i = 0; i < size; i++) {
			if (int(arr[i] - 48) % 2 == 0) {
				out << arr[i];
			}
		}
		out.close();
	}
	else cout << "Error openfile.";
	delete[] arr;
}
void task_18() {
	ofstream out("text.txt", ios::out);
	string str;
	cout << "Введите строку: ";
	getline(cin, str);
	if (out.is_open()) {
		while (str != "0") {
			out << str << endl;
			cout << "Для продолжения введите строку, для завершения записи файла нажмите '0': ";
			getline(cin, str);
		}
		out.close();
	}
	else cout << "Error openfile.";
	ofstream out1("text1.txt", ios::out), out2("text2.txt", ios::out);
	ifstream in("text.txt");
	if (in.is_open() && out1.is_open() && out2.is_open()) {
		while (getline(in, str)) {
			for (int i = 0; i < str.size(); i++) {
				if (str[i] >= '0' && str[i] <= '9') {
					out1 << str[i] << endl;
				}
				else out2 << str[i] << endl;
			}
		}
		in.close();
		out1.close();
		out2.close();
	}
	else cout << "Error openfile.";
}
void task_19() {
	ofstream out("text.txt", ios::out);
	string str;
	if (out.is_open()) {
		for (int i = 0; i < 6; i++) {
			cout << "Введите строку: " << i+1 << " ";
			getline(cin, str);
			out << str << endl;
		}
		out.close();
	}
	else cout << "Error openfile.";
}
void task_20() {
	const int row = 5, colomn = 6;
	int matrix[row][colomn];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colomn; j++) {
			matrix[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colomn; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int index, number;
	cout << "Введите номер строки где будет осуществляться поиск от 1 до 5: ";
	cin >> index;
	number = matrix[index - 1][0];
	for (int i = 1; i < colomn; i++) {
		if (number > matrix[index - 1][i]) number = matrix[index - 1][i];
	}
	cout << "Наименьшее число в " << index << " строке: " << number << endl;
	cout << "Введите номер столбца где будет осуществляться поиск от 1 до 6: ";
	cin >> index;
	number = matrix[0][index - 1];
	for (int i = 1; i < row; i++) {
		if (number < matrix[i][index - 1]) number = matrix[i][index - 1];
	}
	cout << "Наибольшее число в " << index << " столбце: " << number;
}