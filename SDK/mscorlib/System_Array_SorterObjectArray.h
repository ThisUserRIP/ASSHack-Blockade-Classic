#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Array.h"
namespace mscorlib::System { struct Array; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IComparer; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System
{
	struct Array_SorterObjectArray
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* keys;
		IL2CPP::Array<mscorlib::System::Object*>* items;
		mscorlib::System::Collections::IComparer* comparer;
		void _ctor(IL2CPP::Array<mscorlib::System::Object*>* keys, IL2CPP::Array<mscorlib::System::Object*>* items, mscorlib::System::Collections::IComparer* comparer);
		void SwapIfGreaterWithItems(int32_t a, int32_t b);
		void Swap(int32_t i, int32_t j);
		void Sort(int32_t left, int32_t length);
		void IntrospectiveSort(int32_t left, int32_t length);
		void IntroSort(int32_t lo, int32_t hi, int32_t depthLimit);
		int32_t PickPivotAndPartition(int32_t lo, int32_t hi);
		void Heapsort(int32_t lo, int32_t hi);
		void DownHeap(int32_t i, int32_t n, int32_t lo);
		void InsertionSort(int32_t lo, int32_t hi);
	};
}

