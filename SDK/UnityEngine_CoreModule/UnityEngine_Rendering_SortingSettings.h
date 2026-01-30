#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Rendering_SortingCriteria.h"
#include "UnityEngine_Rendering_DistanceMetric.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct SortingSettings
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_WorldToCameraMatrix;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_CameraPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_CustomAxis;
		UnityEngine_CoreModule::UnityEngine::Rendering::SortingCriteria m_Criteria;
		UnityEngine_CoreModule::UnityEngine::Rendering::DistanceMetric m_DistanceMetric;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_PreviousVPMatrix;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_NonJitteredVPMatrix;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void set_customAxis(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Rendering::SortingCriteria get_criteria();
		void set_criteria(UnityEngine_CoreModule::UnityEngine::Rendering::SortingCriteria value);
		void set_distanceMetric(UnityEngine_CoreModule::UnityEngine::Rendering::DistanceMetric value);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::SortingSettings other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

