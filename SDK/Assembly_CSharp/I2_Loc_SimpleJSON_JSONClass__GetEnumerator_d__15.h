#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_SimpleJSON_JSONClass.h"
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONClass; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONNode; };
#include "..\mscorlib\System_Collections_Generic_Dictionary_2_Enumerator.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2_Enumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	struct JSONClass__GetEnumerator_d__15 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONClass* __4__this;
		mscorlib::System::Collections::Generic::Dictionary_2_Enumerator<mscorlib::System::String, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode> __7__wrap1;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		void __m__Finally1();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

