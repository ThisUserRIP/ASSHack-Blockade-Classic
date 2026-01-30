#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Internal_DrawTextureArguments
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rect screenRect;
		UnityEngine_CoreModule::UnityEngine::Rect sourceRect;
		int32_t leftBorder;
		int32_t rightBorder;
		int32_t topBorder;
		int32_t bottomBorder;
		UnityEngine_CoreModule::UnityEngine::Color leftBorderColor;
		UnityEngine_CoreModule::UnityEngine::Color rightBorderColor;
		UnityEngine_CoreModule::UnityEngine::Color topBorderColor;
		UnityEngine_CoreModule::UnityEngine::Color bottomBorderColor;
		UnityEngine_CoreModule::UnityEngine::Color color;
		UnityEngine_CoreModule::UnityEngine::Vector4 borderWidths;
		UnityEngine_CoreModule::UnityEngine::Vector4 cornerRadiuses;
		bool smoothCorners;
		int32_t pass;
		UnityEngine_CoreModule::UnityEngine::Texture* texture;
		UnityEngine_CoreModule::UnityEngine::Material* mat;
	};
}

