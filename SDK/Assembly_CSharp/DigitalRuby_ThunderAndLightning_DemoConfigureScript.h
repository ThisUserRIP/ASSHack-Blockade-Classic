#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltScript; };
namespace UnityEngine_UI::UnityEngine::UI { struct Slider; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct RawImage; };
namespace UnityEngine_UI::UnityEngine::UI { struct Button; };
namespace UnityEngine_UI::UnityEngine::UI { struct InputField; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct DemoConfigureScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t lastSeed;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastStart;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastEnd;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript* LightningBoltScript;
		UnityEngine_UI::UnityEngine::UI::Slider* GenerationsSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* BoltCountSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* DurationSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* ChaosSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* TrunkWidthSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* ForkednessSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* IntensitySlider;
		UnityEngine_UI::UnityEngine::UI::Text* IntensityValueLabel;
		UnityEngine_UI::UnityEngine::UI::Slider* GlowIntensitySlider;
		UnityEngine_UI::UnityEngine::UI::Slider* GlowWidthSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* FadePercentSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* GrowthMultiplierSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* DistanceSlider;
		UnityEngine_UI::UnityEngine::UI::Text* GenerationsValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* BoltCountValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* DurationValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* ChaosValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* TrunkWidthValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* ForkednessValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* GlowIntensityValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* GlowWidthValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* FadePercentValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* GrowthMultiplierValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* DistanceValueLabel;
		UnityEngine_UI::UnityEngine::UI::Text* SeedLabel;
		UnityEngine_UI::UnityEngine::UI::RawImage* StartImage;
		UnityEngine_UI::UnityEngine::UI::RawImage* EndImage;
		UnityEngine_UI::UnityEngine::UI::Button* CopySeedButton;
		UnityEngine_UI::UnityEngine::UI::InputField* SeedInputField;
		UnityEngine_UI::UnityEngine::UI::Text* SpaceBarLabel;
		UnityEngine_UI::UnityEngine::UI::Toggle* OrthographicToggle;
		struct StaticFields
		{
			mscorlib::System::String* scriptTemplate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void GenerationsSliderChanged(float value);
		void BoltCountSliderChanged(float value);
		void DurationSliderChanged(float value);
		void LengthSliderValueChanged(float value);
		void TrunkSliderValueChanged(float value);
		void IntensitySliderValueChanged(float value);
		void GlowSliderValueChanged(float value);
		void FadePercentValueChanged(float value);
		void GrowthMultiplierValueChanged(float value);
		void DistanceValueChanged(float value);
		void StartLightningDrag();
		void EndLightningDrag();
		void CreateButtonClicked();
		void OrthographicToggleClicked();
		void CopyButtonClicked();
		void ClearButtonClicked();
		void UpdateUI();
		void CallLightning();
		void UpdateStatusLabel(mscorlib::System::TimeSpan time);
		void Start();
		void Update();
		void _ctor();
	};
}

