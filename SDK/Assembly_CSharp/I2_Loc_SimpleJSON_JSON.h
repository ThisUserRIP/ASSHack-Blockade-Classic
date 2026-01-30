#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONNode; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	struct JSON : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* Parse(mscorlib::System::String* aJSON);
	};
}

