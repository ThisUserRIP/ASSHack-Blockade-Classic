#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DigitalRuby_ThunderAndLightning_LightningBolt.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBolt; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningCustomTransformStateInfo; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_CoreModule::UnityEngine { struct MeshFilter; };
namespace UnityEngine_CoreModule::UnityEngine { struct MeshRenderer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBolt_LineRendererMesh : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* _GameObject_k__BackingField;
		int32_t _Tag_k__BackingField;
		mscorlib::System::Action_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>* _CustomTransform_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _Transform_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* indices;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* lineDirs;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* colors;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* ends;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* texCoordsAndGlowModifiers;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* fadeLifetimes;
		int32_t currentBoundsMinX;
		int32_t currentBoundsMinY;
		int32_t currentBoundsMinZ;
		int32_t currentBoundsMaxX;
		int32_t currentBoundsMaxY;
		int32_t currentBoundsMaxZ;
		UnityEngine_CoreModule::UnityEngine::Mesh* mesh;
		UnityEngine_CoreModule::UnityEngine::MeshFilter* meshFilterGlow;
		UnityEngine_CoreModule::UnityEngine::MeshFilter* meshFilterBolt;
		UnityEngine_CoreModule::UnityEngine::MeshRenderer* meshRendererGlow;
		UnityEngine_CoreModule::UnityEngine::MeshRenderer* meshRendererBolt;
		struct StaticFields
		{
			int32_t defaultListCapacity;
			UnityEngine_CoreModule::UnityEngine::Vector2 uv1;
			UnityEngine_CoreModule::UnityEngine::Vector2 uv2;
			UnityEngine_CoreModule::UnityEngine::Vector2 uv3;
			UnityEngine_CoreModule::UnityEngine::Vector2 uv4;
			int32_t boundsPadder;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::GameObject* get_GameObject();
		void set_GameObject(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_MaterialGlow();
		void set_MaterialGlow(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_MaterialBolt();
		void set_MaterialBolt(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::MeshRenderer* get_MeshRendererGlow();
		UnityEngine_CoreModule::UnityEngine::MeshRenderer* get_MeshRendererBolt();
		int32_t get_Tag();
		void set_Tag(int32_t value);
		mscorlib::System::Action_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>* get_CustomTransform();
		void set_CustomTransform(mscorlib::System::Action_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_Transform();
		void set_Transform(UnityEngine_CoreModule::UnityEngine::Transform* value);
		bool get_Empty();
		void _ctor();
		void PopulateMesh();
		bool PrepareForLines(int32_t lineCount);
		void BeginLine(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, float radius, UnityEngine_CoreModule::UnityEngine::Color32 color, float colorIntensity, UnityEngine_CoreModule::UnityEngine::Vector4 fadeLifeTime, float glowWidthModifier, float glowIntensity);
		void AppendLine(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, float radius, UnityEngine_CoreModule::UnityEngine::Color32 color, float colorIntensity, UnityEngine_CoreModule::UnityEngine::Vector4 fadeLifeTime, float glowWidthModifier, float glowIntensity);
		void Reset();
		void PopulateMeshInternal();
		void UpdateBounds(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2);
		void AddIndices();
		void AppendLineInternal(UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end, UnityEngine_CoreModule::UnityEngine::Vector4& dir, UnityEngine_CoreModule::UnityEngine::Vector4& dirPrev1, UnityEngine_CoreModule::UnityEngine::Vector4& dirPrev2, UnityEngine_CoreModule::UnityEngine::Color32 color, float colorIntensity, UnityEngine_CoreModule::UnityEngine::Vector4& fadeLifeTime, float glowWidthModifier, float glowIntensity);
		static void _cctor();
	};
}

