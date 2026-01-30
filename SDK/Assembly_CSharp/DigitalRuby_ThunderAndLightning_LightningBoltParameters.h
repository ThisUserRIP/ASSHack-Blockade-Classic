#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltQualitySetting.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningQualityMaximum; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningGenerator; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningCustomTransformStateInfo; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "DigitalRuby_ThunderAndLightning_RangeOfFloats.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfFloats; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
namespace mscorlib::System { struct Random_; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningLightParameters; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBoltParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t generationWhereForksStop;
		int32_t forkednessCalculated;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltQualitySetting quality;
		float delaySeconds;
		int32_t maxLights;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator* Generator;
		UnityEngine_CoreModule::UnityEngine::Vector3 Start;
		UnityEngine_CoreModule::UnityEngine::Vector3 End;
		UnityEngine_CoreModule::UnityEngine::Vector3 StartVariance;
		UnityEngine_CoreModule::UnityEngine::Vector3 EndVariance;
		mscorlib::System::Action_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>* CustomTransform;
		int32_t generations;
		float LifeTime;
		float Delay;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats DelayRange;
		float ChaosFactor;
		float ChaosFactorForks;
		float TrunkWidth;
		float EndWidthMultiplier;
		float Intensity;
		float GlowIntensity;
		float GlowWidthMultiplier;
		float Forkedness;
		int32_t GenerationWhereForksStopSubtractor;
		UnityEngine_CoreModule::UnityEngine::Color32 Color;
		UnityEngine_CoreModule::UnityEngine::Color32 MainTrunkTintColor;
		mscorlib::System::Random_* random;
		mscorlib::System::Random_* currentRandom;
		mscorlib::System::Random_* randomOverride;
		float FadePercent;
		float FadeInMultiplier;
		float FadeFullyLitMultiplier;
		float FadeOutMultiplier;
		float growthMultiplier;
		float ForkLengthMultiplier;
		float ForkLengthVariance;
		float ForkEndWidthMultiplier;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* LightParameters;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* _Points_k__BackingField;
		int32_t SmoothingFactor;
		struct StaticFields
		{
			int32_t randomSeed;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters>* cache;
			float Scale;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningQualityMaximum>* QualityMaximums;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t get_Generations();
		void set_Generations(int32_t value);
		mscorlib::System::Random_* get_Random();
		void set_Random(mscorlib::System::Random_* value);
		mscorlib::System::Random_* get_RandomOverride();
		void set_RandomOverride(mscorlib::System::Random_* value);
		float get_GrowthMultiplier();
		void set_GrowthMultiplier(float value);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* get_Points();
		void set_Points(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* value);
		float ForkMultiplier();
		UnityEngine_CoreModule::UnityEngine::Vector3 ApplyVariance(UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_CoreModule::UnityEngine::Vector3 variance);
		void Reset();
		static Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* GetOrCreateParameters();
		static void ReturnParametersToCache(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p);
	};
}

