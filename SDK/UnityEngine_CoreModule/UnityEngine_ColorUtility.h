#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_Color.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct ColorUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool DoTryParseHtmlColor(mscorlib::System::String* htmlString, UnityEngine_CoreModule::UnityEngine::Color32& color);
		static bool TryParseHtmlString(mscorlib::System::String* htmlString, UnityEngine_CoreModule::UnityEngine::Color& color);
		static mscorlib::System::String* ToHtmlStringRGB(UnityEngine_CoreModule::UnityEngine::Color color);
	};
}

