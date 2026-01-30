#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ThemeSettings.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_UI\UnityEngine_UI_Image_Type.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_UI\UnityEngine_UI_Image_FillMethod.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ThemeSettings_ImageSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color _color;
		UnityEngine_CoreModule::UnityEngine::Sprite* _sprite;
		UnityEngine_CoreModule::UnityEngine::Material* _materal;
		UnityEngine_UI::UnityEngine::UI::Image_Type _type;
		bool _preserveAspect;
		bool _fillCenter;
		UnityEngine_UI::UnityEngine::UI::Image_FillMethod _fillMethod;
		float _fillAmout;
		bool _fillClockwise;
		int32_t _fillOrigin;
		UnityEngine_CoreModule::UnityEngine::Color get_color();
		UnityEngine_CoreModule::UnityEngine::Sprite* get_sprite();
		UnityEngine_CoreModule::UnityEngine::Material* get_materal();
		UnityEngine_UI::UnityEngine::UI::Image_Type get_type();
		bool get_preserveAspect();
		bool get_fillCenter();
		UnityEngine_UI::UnityEngine::UI::Image_FillMethod get_fillMethod();
		float get_fillAmout();
		bool get_fillClockwise();
		int32_t get_fillOrigin();
		void CopyTo(UnityEngine_UI::UnityEngine::UI::Image* image);
		void _ctor();
	};
}

