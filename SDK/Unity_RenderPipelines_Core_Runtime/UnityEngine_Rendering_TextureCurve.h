#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Keyframe.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Keyframe; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_TextureFormat.h"

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct TextureCurve : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _length_k__BackingField;
		bool m_Loop;
		float m_ZeroValue;
		float m_Range;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* m_Curve;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* m_LoopingCurve;
		UnityEngine_CoreModule::UnityEngine::Texture2D* m_Texture;
		bool m_IsCurveDirty;
		bool m_IsTextureDirty;
		struct StaticFields
		{
			int32_t k_Precision;
			float k_Step;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_length();
		void set_length(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Keyframe get_Item(int32_t index);
		void _ctor(UnityEngine_CoreModule::UnityEngine::AnimationCurve* baseCurve, float zeroValue, bool loop, UnityEngine_CoreModule::UnityEngine::Vector2& bounds);
		void _ctor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* keys, float zeroValue, bool loop, UnityEngine_CoreModule::UnityEngine::Vector2& bounds);
		void Finalize();
		void Dispose();
		void Release();
		void SetDirty();
		static UnityEngine_CoreModule::UnityEngine::TextureFormat GetTextureFormat();
		UnityEngine_CoreModule::UnityEngine::Texture2D* GetTexture();
		float Evaluate(float time);
		int32_t AddKey(float time, float value);
		int32_t MoveKey(int32_t index, UnityEngine_CoreModule::UnityEngine::Keyframe& key);
		void RemoveKey(int32_t index);
		void SmoothTangents(int32_t index, float weight);
	};
}

