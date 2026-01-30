#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_ShadowSplitData__m_CullingPlanes_e__FixedBuffer.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShadowSplitData__m_CullingPlanes_e__FixedBuffer; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Plane.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Plane; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct ShadowSplitData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_CullingPlaneCount;
		UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData__m_CullingPlanes_e__FixedBuffer m_CullingPlanes;
		UnityEngine_CoreModule::UnityEngine::Vector4 m_CullingSphere;
		float m_ShadowCascadeBlendCullingFactor;
		float m_CullingNearPlane;
		int32_t get_cullingPlaneCount();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_cullingSphere();
		void set_cullingSphere(UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void set_shadowCascadeBlendCullingFactor(float value);
		UnityEngine_CoreModule::UnityEngine::Plane GetCullingPlane(int32_t index);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static void _cctor();
	};
}

