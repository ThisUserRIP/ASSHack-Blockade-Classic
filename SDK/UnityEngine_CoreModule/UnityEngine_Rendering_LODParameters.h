#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct LODParameters
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_IsOrthographic;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_CameraPosition;
		float m_FieldOfView;
		float m_OrthoSize;
		int32_t m_CameraPixelHeight;
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::LODParameters other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

