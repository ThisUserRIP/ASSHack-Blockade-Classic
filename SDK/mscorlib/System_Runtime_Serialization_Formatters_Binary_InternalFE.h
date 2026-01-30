#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Serialization_Formatters_FormatterTypeStyle.h"
#include "System_Runtime_Serialization_Formatters_FormatterAssemblyStyle.h"
#include "System_Runtime_Serialization_Formatters_TypeFilterLevel.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalSerializerTypeE.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct InternalFE : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle FEtypeFormat;
		mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle FEassemblyFormat;
		mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel FEsecurityLevel;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE FEserializerTypeEnum;
		void _ctor();
	};
}

