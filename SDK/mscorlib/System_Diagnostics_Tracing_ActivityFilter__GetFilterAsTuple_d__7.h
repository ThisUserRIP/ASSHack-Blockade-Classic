#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_ActivityFilter.h"
namespace mscorlib::System::Diagnostics::Tracing { struct ActivityFilter; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T1, typename T2> struct Tuple_2; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct ActivityFilter__GetFilterAsTuple_d__7 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Tuple_2<mscorlib::System::Int32, mscorlib::System::Int32>* __2__current;
		int32_t __l__initialThreadId;
		mscorlib::System::Diagnostics::Tracing::ActivityFilter* __4__this;
		mscorlib::System::Guid sourceGuid;
		mscorlib::System::Guid __3__sourceGuid;
		mscorlib::System::Diagnostics::Tracing::ActivityFilter* _af_5__1;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		mscorlib::System::Tuple_2<mscorlib::System::Int32, mscorlib::System::Int32>* System_Collections_Generic_IEnumerator_System_Tuple_System_Int32_System_Int32___get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Tuple_2<mscorlib::System::Int32, mscorlib::System::Int32>>* System_Collections_Generic_IEnumerable_System_Tuple_System_Int32_System_Int32___GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
	};
}

