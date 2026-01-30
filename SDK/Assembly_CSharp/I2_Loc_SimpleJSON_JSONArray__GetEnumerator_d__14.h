#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_SimpleJSON_JSONArray.h"
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONArray; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONNode; };
#include "..\mscorlib\System_Collections_Generic_List_1_Enumerator.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1_Enumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	struct JSONArray__GetEnumerator_d__14 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONArray* __4__this;
		mscorlib::System::Collections::Generic::List_1_Enumerator<Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode> __7__wrap1;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		void __m__Finally1();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

