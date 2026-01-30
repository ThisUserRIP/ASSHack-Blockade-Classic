#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Serialization_Formatters_Binary_ObjectReader.h"
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectReader; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct ObjectReader_TopLevelAssemblyTypeResolver : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::Assembly* m_topLevelAssembly;
		void _ctor(mscorlib::System::Reflection::Assembly* topLevelAssembly);
		mscorlib::System::Type* ResolveType(mscorlib::System::Reflection::Assembly* assembly, mscorlib::System::String* simpleTypeName, bool ignoreCase);
	};
}

