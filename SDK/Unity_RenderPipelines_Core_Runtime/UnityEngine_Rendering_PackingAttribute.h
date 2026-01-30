#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Rendering_FieldPacking.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct PackingAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* displayNames;
		IL2CPP::Array<float>* range;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPacking packingScheme;
		int32_t offsetInSource;
		int32_t sizeInBits;
		bool isDirection;
		bool sRGBDisplay;
		bool checkIsNormalized;
		void _ctor(IL2CPP::Array<mscorlib::System::String*>* displayNames, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize, int32_t offsetInSource, float minValue, float maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized);
		void _ctor(mscorlib::System::String* displayName, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize, int32_t offsetInSource, float minValue, float maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized);
	};
}

