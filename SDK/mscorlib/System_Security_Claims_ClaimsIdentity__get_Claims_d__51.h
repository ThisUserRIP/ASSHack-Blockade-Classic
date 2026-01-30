#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Security_Claims_ClaimsIdentity.h"
namespace mscorlib::System::Security::Claims { struct ClaimsIdentity; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Claims { struct Claim; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace mscorlib::System::Security::Claims
{
	struct ClaimsIdentity__get_Claims_d__51 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Security::Claims::Claim* __2__current;
		int32_t __l__initialThreadId;
		mscorlib::System::Security::Claims::ClaimsIdentity* __4__this;
		int32_t _i_5__1;
		int32_t _j_5__2;
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Security::Claims::Claim>* __7__wrap1;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		void __m__Finally1();
		mscorlib::System::Security::Claims::Claim* System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Security::Claims::Claim>* System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
	};
}

