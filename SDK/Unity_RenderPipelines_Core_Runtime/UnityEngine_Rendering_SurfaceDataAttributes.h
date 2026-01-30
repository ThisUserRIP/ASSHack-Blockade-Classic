#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_FieldPrecision.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct SurfaceDataAttributes : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* displayNames;
		bool isDirection;
		bool sRGBDisplay;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPrecision precision;
		bool checkIsNormalized;
		void _ctor(mscorlib::System::String* displayName, bool isDirection, bool sRGBDisplay, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPrecision precision, bool checkIsNormalized);
		void _ctor(IL2CPP::Array<mscorlib::System::String*>* displayNames, bool isDirection, bool sRGBDisplay, bool checkIsNormalized, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPrecision precision);
	};
}

