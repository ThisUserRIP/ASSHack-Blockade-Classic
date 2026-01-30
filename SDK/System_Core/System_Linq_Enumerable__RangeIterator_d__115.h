#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Linq_Enumerable.h"
namespace System_Core::System::Linq { struct Enumerable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System_Core::System::Linq
{
	struct Enumerable__RangeIterator_d__115 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		int32_t __2__current;
		int32_t __l__initialThreadId;
		int32_t start;
		int32_t __3__start;
		int32_t _i_5__1;
		int32_t count;
		int32_t __3__count;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
	};
}

