#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "UnityEngine_Bindings_CodegenOptions.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_SharedInternalsModule::UnityEngine::Bindings
{
	struct NativeTypeAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Header_k__BackingField;
		mscorlib::System::String* _IntermediateScriptingStructName_k__BackingField;
		UnityEngine_SharedInternalsModule::UnityEngine::Bindings::CodegenOptions _CodegenOptions_k__BackingField;
		void set_Header(mscorlib::System::String* value);
		void set_IntermediateScriptingStructName(mscorlib::System::String* value);
		void set_CodegenOptions(UnityEngine_SharedInternalsModule::UnityEngine::Bindings::CodegenOptions value);
		void _ctor();
		void _ctor(UnityEngine_SharedInternalsModule::UnityEngine::Bindings::CodegenOptions codegenOptions);
		void _ctor(mscorlib::System::String* header);
		void _ctor(UnityEngine_SharedInternalsModule::UnityEngine::Bindings::CodegenOptions codegenOptions, mscorlib::System::String* intermediateStructName);
	};
}

