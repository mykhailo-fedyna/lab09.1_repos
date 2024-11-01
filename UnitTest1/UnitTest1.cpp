#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.1.cpp"
#include "../dod.cpp"
#include "../sum.cpp"
#include "../var.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestSumCalculation)
		{
			// Ініціалізація вхідних значень
			x_p = 1.0;
			x_k = 2.0;
			dx = 0.1;
			e = 0.0001;

			// Перевірка значення результату в конкретній точці
			x = 1.5;  // обране значення x для перевірки
			sum();    // виклик функції sum(), яка має розрахувати s і n

			// Очікуване значення для log(1.5)
			double expectedValue = log(1.5);

			// Перевірка, чи результат обчислення s близький до log(x) із врахуванням точності e
			Assert::AreEqual(expectedValue, s, 0.0001);

			// Перевірка, що n є додатнім числом
			Assert::IsTrue(n > 0);
		}
	};
}
