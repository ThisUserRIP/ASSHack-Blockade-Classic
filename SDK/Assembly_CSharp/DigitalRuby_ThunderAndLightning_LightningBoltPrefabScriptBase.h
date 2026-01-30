#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltScript.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Random_; };
#include "DigitalRuby_ThunderAndLightning_RangeOfFloats.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfFloats; };
#include "DigitalRuby_ThunderAndLightning_RangeOfIntegers.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfIntegers; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningLightParameters; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningCustomTransformDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningCustomTransformStateInfo; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBoltPrefabScriptBase : Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters>* batchParameters;
		mscorlib::System::Random_* random;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats IntervalRange;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfIntegers CountRange;
		float CountProbabilityModifier;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats DelayRange;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats DurationRange;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats TrunkWidthRange;
		float LifeTime;
		int32_t Generations;
		float ChaosFactor;
		float ChaosFactorForks;
		float Intensity;
		float GlowIntensity;
		float GlowWidthMultiplier;
		float FadePercent;
		float FadeInMultiplier;
		float FadeFullyLitMultiplier;
		float FadeOutMultiplier;
		float GrowthMultiplier;
		float EndWidthMultiplier;
		float Forkedness;
		float ForkLengthMultiplier;
		float ForkLengthVariance;
		float ForkEndWidthMultiplier;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* LightParameters;
		int32_t MaximumLightsPerBatch;
		bool ManualMode;
		float AutomaticModeSeconds;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformDelegate* CustomTransformHandler;
		mscorlib::System::Random_* _RandomOverride_k__BackingField;
		float nextLightningTimestamp;
		float lifeTimeRemaining;
		mscorlib::System::Random_* get_RandomOverride();
		void set_RandomOverride(mscorlib::System::Random_* value);
		void CalculateNextLightningTimestamp(float offset);
		void CustomTransform(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* state);
		void CallLightning();
		void CallLightning(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> start, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> end);
		void CreateLightningBoltsNow();
		void PopulateParameters(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		void Start();
		void Update();
		void CreateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p);
		void Trigger();
		void Trigger(float seconds);
		void Trigger(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> start, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> end);
		void _ctor();
	};
}

