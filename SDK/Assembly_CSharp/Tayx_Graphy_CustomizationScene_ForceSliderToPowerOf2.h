#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Slider; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::Tayx::Graphy::CustomizationScene
{
	struct ForceSliderToPowerOf2 : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Slider* m_slider;
		IL2CPP::Array<int32_t>* m_powerOf2Values;
		UnityEngine_UI::UnityEngine::UI::Text* m_text;
		void Start();
		void UpdateValue(float value);
		void _ctor();
	};
}

