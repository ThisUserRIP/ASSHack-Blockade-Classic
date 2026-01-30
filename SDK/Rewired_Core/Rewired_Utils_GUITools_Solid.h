#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Utils_GUITools.h"
namespace Rewired_Core::Rewired::Utils { struct GUITools; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };

namespace Rewired_Core::Rewired::Utils
{
	struct GUITools_Solid : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool zMmIekalfoADoeKvafTxvVPRkeo;
			UnityEngine_CoreModule::UnityEngine::Texture2D* rLDeWDupTSRWRCiOhcUkcMrfSKM;
			UnityEngine_CoreModule::UnityEngine::Color dBpedZdaBHibmwQVARfoJzXUbQT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Color get_color();
		static void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		static float get_colorR();
		static void set_colorR(float value);
		static float get_colorG();
		static void set_colorG(float value);
		static float get_colorB();
		static void set_colorB(float value);
		static float get_colorA();
		static void set_colorA(float value);
		static void Draw(UnityEngine_CoreModule::UnityEngine::Rect rect);
		static void Draw(UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Color color);
		static void DrawRotated(UnityEngine_CoreModule::UnityEngine::Rect rect, float rotation);
		static void DrawRotated(UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Color color, float rotation);
		static UnityEngine_CoreModule::UnityEngine::Texture2D* DrawToTexture(UnityEngine_CoreModule::UnityEngine::Rect rect);
		static void BeginDrawSet();
		static void EndDrawSet();
		static void DrawBox(UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Color color, float lineWidth);
		static void DrawBox(UnityEngine_CoreModule::UnityEngine::Rect rect, float lineWidth);
		static void DrawBoxRotated(UnityEngine_CoreModule::UnityEngine::Rect rect, float rotation, float lineWidth);
		static void _cctor();
	};
}

