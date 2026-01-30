#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_Rendering_ReloadAttribute_Package.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct ReloadAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(IL2CPP::Array<mscorlib::System::String*>* paths, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute_Package package);
		void _ctor(mscorlib::System::String* path, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute_Package package);
		void _ctor(mscorlib::System::String* pathFormat, int32_t rangeMin, int32_t rangeMax, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute_Package package);
	};
}

