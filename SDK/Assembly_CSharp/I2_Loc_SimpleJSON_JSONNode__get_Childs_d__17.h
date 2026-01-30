#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_SimpleJSON_JSONNode.h"
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONNode; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	struct JSONNode__get_Childs_d__17 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* __2__current;
		int32_t __l__initialThreadId;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_I2_Loc_SimpleJSON_JSONNode__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		mscorlib::System::Collections::Generic::IEnumerator_1<Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode>* System_Collections_Generic_IEnumerable_I2_Loc_SimpleJSON_JSONNode__GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
	};
}

