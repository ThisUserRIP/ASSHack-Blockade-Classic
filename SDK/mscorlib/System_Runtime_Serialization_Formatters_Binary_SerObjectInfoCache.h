#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct SerObjectInfoCache : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* fullTypeName;
		mscorlib::System::String* assemblyString;
		bool hasTypeForwardedFrom;
		IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* memberInfos;
		IL2CPP::Array<mscorlib::System::String*>* memberNames;
		IL2CPP::Array<mscorlib::System::Type*>* memberTypes;
		void _ctor(mscorlib::System::String* typeName, mscorlib::System::String* assemblyName, bool hasTypeForwardedFrom);
		void _ctor(mscorlib::System::Type* type);
	};
}

