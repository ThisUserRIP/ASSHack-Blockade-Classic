#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct VisibleReflectionProbe
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Bounds m_Bounds;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_LocalToWorldMatrix;
		UnityEngine_CoreModule::UnityEngine::Vector4 m_HdrData;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Center;
		float m_BlendDistance;
		int32_t m_Importance;
		int32_t m_BoxProjection;
		int32_t m_InstanceId;
		int32_t m_TextureId;
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::VisibleReflectionProbe other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

