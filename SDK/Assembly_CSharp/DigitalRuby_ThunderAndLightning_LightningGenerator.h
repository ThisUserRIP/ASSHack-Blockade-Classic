#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBolt; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Random_; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float oneOver255;
			float mainTrunkMultiplier;
			Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator* GeneratorInstance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void GetPerpendicularVector(UnityEngine_CoreModule::UnityEngine::Vector3& directionNormalized, UnityEngine_CoreModule::UnityEngine::Vector3& side);
		void OnGenerateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		bool ShouldCreateFork(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters, int32_t generation, int32_t totalGenerations);
		void CreateFork(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters, int32_t generation, int32_t totalGenerations, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 midPoint);
		void GenerateLightningBoltStandard(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, int32_t generation, int32_t totalGenerations, float offsetAmount, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		UnityEngine_CoreModule::UnityEngine::Vector3 RandomDirection3D(mscorlib::System::Random_* random);
		UnityEngine_CoreModule::UnityEngine::Vector3 RandomDirection2D(mscorlib::System::Random_* random);
		UnityEngine_CoreModule::UnityEngine::Vector3 RandomDirection2DXZ(mscorlib::System::Random_* random);
		void RandomVector(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end, float offsetAmount, mscorlib::System::Random_* random, UnityEngine_CoreModule::UnityEngine::Vector3& result);
		void GenerateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		void GenerateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters, UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end);
		void _ctor();
		static void _cctor();
	};
}

