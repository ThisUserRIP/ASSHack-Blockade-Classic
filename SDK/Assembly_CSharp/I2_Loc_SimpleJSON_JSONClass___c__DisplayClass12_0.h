#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_SimpleJSON_JSONClass.h"
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONClass; };
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };

namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	struct JSONClass___c__DisplayClass12_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aNode;
		void _ctor();
		bool _Remove_b__0(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode> k);
	};
}

