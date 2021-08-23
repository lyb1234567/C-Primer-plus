#include "pch.h"
#include "CppUnitTest.h"
#include"../Python_lst/Link_list.h"
#include"../Python_lst/list.h"
#include"../Python_lst/implement_link_list.cpp"
#include"../Python_lst/implement_list.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:
		TEST_METHOD(return_Index)
		{
			list a;
			a.append(3);
			Assert::AreEqual(0, a.index(3));
		}
		TEST_METHOD(Length)
		{
			list a;
			a.append(3);
			a.append(4);

			Assert::AreEqual(2, a.len());
		}
		TEST_METHOD(index_number)
		{
			list a;
			a.append(3);
			a.append(4);
			Assert::AreEqual(4, a[1]);
		}
		TEST_METHOD(add)
		{
			list a;
			a.append(3);
			a.append(4);
			a + 3;
			Assert::AreEqual(6, a[0]);
		}
		TEST_METHOD(minus)
		{
			list a;
			a.append(3);
			a.append(4);
			a -3;
			Assert::AreEqual(0, a[0]);
		}
		TEST_METHOD(str_list)
		{
			list a("sda");
			Assert::AreEqual(3, a.len());
		}
		TEST_METHOD(index_str)
		{
			list a("sda");
			Assert::AreEqual(0, a.index("s"));
		}
		TEST_METHOD(sorting)
		{
			list a;
			a.append(3);
			a.append(4);
			a.append(1);
			a.append(2);
			a.sort();
			Assert::AreEqual(1.0, a.min());
			Assert::AreEqual(4.0, a.max());
		}
		TEST_METHOD(max_min)
		{
			list a;
			a.append(3);
			a.append(4);
			a.append(1);
			a.append(2);
			Assert::AreEqual(1.0, a.min());
			Assert::AreEqual(4.0, a.max());
		}
		TEST_METHOD(pop)
		{
			list a;
			a.append(3);
			a.append(4);
			a.append(1);
			a.append(2);
			Assert::AreEqual(2.0, a.pop());
		}
	};
}
