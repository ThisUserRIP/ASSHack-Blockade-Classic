#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Tayx::Graphy::CustomizationScene { struct G_CUIColorPicker; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
namespace UnityEngine_UI::UnityEngine::UI { struct Dropdown; };
namespace UnityEngine_UI::UnityEngine::UI { struct Button; };
namespace UnityEngine_UI::UnityEngine::UI { struct InputField; };
namespace UnityEngine_UI::UnityEngine::UI { struct Slider; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::Tayx::Graphy::CustomizationScene
{
	struct CustomizeGraphy : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker* m_colorPicker;
		UnityEngine_UI::UnityEngine::UI::Toggle* m_backgroundToggle;
		UnityEngine_UI::UnityEngine::UI::Dropdown* m_graphyModeDropdown;
		UnityEngine_UI::UnityEngine::UI::Button* m_backgroundColorButton;
		UnityEngine_UI::UnityEngine::UI::Dropdown* m_graphModulePositionDropdown;
		UnityEngine_UI::UnityEngine::UI::Dropdown* m_fpsModuleStateDropdown;
		UnityEngine_UI::UnityEngine::UI::InputField* m_goodInputField;
		UnityEngine_UI::UnityEngine::UI::InputField* m_cautionInputField;
		UnityEngine_UI::UnityEngine::UI::Button* m_goodColorButton;
		UnityEngine_UI::UnityEngine::UI::Button* m_cautionColorButton;
		UnityEngine_UI::UnityEngine::UI::Button* m_criticalColorButton;
		UnityEngine_UI::UnityEngine::UI::Slider* m_timeToResetMinMaxSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* m_fpsGraphResolutionSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* m_fpsTextUpdateRateSlider;
		UnityEngine_UI::UnityEngine::UI::Dropdown* m_ramModuleStateDropdown;
		UnityEngine_UI::UnityEngine::UI::Button* m_reservedColorButton;
		UnityEngine_UI::UnityEngine::UI::Button* m_allocatedColorButton;
		UnityEngine_UI::UnityEngine::UI::Button* m_monoColorButton;
		UnityEngine_UI::UnityEngine::UI::Slider* m_ramGraphResolutionSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* m_ramTextUpdateRateSlider;
		UnityEngine_UI::UnityEngine::UI::Dropdown* m_audioModuleStateDropdown;
		UnityEngine_UI::UnityEngine::UI::Button* m_audioGraphColorButton;
		UnityEngine_UI::UnityEngine::UI::Dropdown* m_findAudioListenerDropdown;
		UnityEngine_UI::UnityEngine::UI::Dropdown* m_fttWindowDropdown;
		UnityEngine_UI::UnityEngine::UI::Slider* m_spectrumSizeSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* m_audioGraphResolutionSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* m_audioTextUpdateRateSlider;
		UnityEngine_UI::UnityEngine::UI::Dropdown* m_advancedModulePositionDropdown;
		UnityEngine_UI::UnityEngine::UI::Toggle* m_advancedModuleToggle;
		UnityEngine_UI::UnityEngine::UI::Button* m_musicButton;
		UnityEngine_UI::UnityEngine::UI::Button* m_sfxButton;
		UnityEngine_UI::UnityEngine::UI::Slider* m_musicVolumeSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* m_sfxVolumeSlider;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_musicAudioSource;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_sfxAudioSource;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_AudioModule::UnityEngine::AudioClip>* m_sfxAudioClips;
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		void OnEnable();
		void SetupCallbacks();
		void ToggleMusic();
		void PlayRandomSFX();
		void _ctor();
		void _SetupCallbacks_b__38_0(bool value);
		void _SetupCallbacks_b__38_1();
		void _SetupCallbacks_b__38_30(UnityEngine_CoreModule::UnityEngine::Color color);
		void _SetupCallbacks_b__38_2(int32_t value);
		void _SetupCallbacks_b__38_3(int32_t value);
		void _SetupCallbacks_b__38_4(int32_t value);
		void _SetupCallbacks_b__38_5(mscorlib::System::String* value);
		void _SetupCallbacks_b__38_6(mscorlib::System::String* value);
		void _SetupCallbacks_b__38_7();
		void _SetupCallbacks_b__38_31(UnityEngine_CoreModule::UnityEngine::Color color);
		void _SetupCallbacks_b__38_8();
		void _SetupCallbacks_b__38_32(UnityEngine_CoreModule::UnityEngine::Color color);
		void _SetupCallbacks_b__38_9();
		void _SetupCallbacks_b__38_33(UnityEngine_CoreModule::UnityEngine::Color color);
		void _SetupCallbacks_b__38_10(float value);
		void _SetupCallbacks_b__38_11(float value);
		void _SetupCallbacks_b__38_12(float value);
		void _SetupCallbacks_b__38_13(int32_t value);
		void _SetupCallbacks_b__38_14();
		void _SetupCallbacks_b__38_34(UnityEngine_CoreModule::UnityEngine::Color color);
		void _SetupCallbacks_b__38_15();
		void _SetupCallbacks_b__38_35(UnityEngine_CoreModule::UnityEngine::Color color);
		void _SetupCallbacks_b__38_16();
		void _SetupCallbacks_b__38_36(UnityEngine_CoreModule::UnityEngine::Color color);
		void _SetupCallbacks_b__38_17(float value);
		void _SetupCallbacks_b__38_18(float value);
		void _SetupCallbacks_b__38_19(int32_t value);
		void _SetupCallbacks_b__38_20();
		void _SetupCallbacks_b__38_37(UnityEngine_CoreModule::UnityEngine::Color color);
		void _SetupCallbacks_b__38_21(int32_t value);
		void _SetupCallbacks_b__38_22(int32_t value);
		void _SetupCallbacks_b__38_23(float value);
		void _SetupCallbacks_b__38_24(float value);
		void _SetupCallbacks_b__38_25(float value);
		void _SetupCallbacks_b__38_26(int32_t value);
		void _SetupCallbacks_b__38_27(bool value);
		void _SetupCallbacks_b__38_28(float value);
		void _SetupCallbacks_b__38_29(float value);
	};
}

