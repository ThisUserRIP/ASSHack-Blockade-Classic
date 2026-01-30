#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { struct String; };
#include "System_Reflection_ResourceLocation.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Reflection
{
	struct ManifestResourceInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::Assembly* _containingAssembly;
		mscorlib::System::String* _containingFileName;
		mscorlib::System::Reflection::ResourceLocation _resourceLocation;
		void _ctor(mscorlib::System::Reflection::Assembly* containingAssembly, mscorlib::System::String* containingFileName, mscorlib::System::Reflection::ResourceLocation resourceLocation);
		mscorlib::System::Reflection::Assembly* get_ReferencedAssembly();
		mscorlib::System::String* get_FileName();
		mscorlib::System::Reflection::ResourceLocation get_ResourceLocation();
	};
}

