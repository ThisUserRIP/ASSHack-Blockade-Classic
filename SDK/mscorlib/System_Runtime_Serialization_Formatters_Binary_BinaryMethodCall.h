#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Runtime_Serialization_Formatters_Binary_MessageEnum.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryWriter; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct BinaryMethodCall : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* methodName;
		mscorlib::System::String* typeName;
		IL2CPP::Array<mscorlib::System::Object*>* args;
		mscorlib::System::Object* callContext;
		IL2CPP::Array<mscorlib::System::Type*>* argTypes;
		bool bArgsPrimitive;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;
		void Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
		void Dump();
		void _ctor();
	};
}

