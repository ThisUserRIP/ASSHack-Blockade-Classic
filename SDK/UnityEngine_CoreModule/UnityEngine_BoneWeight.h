#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct BoneWeight
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_Weight0;
		float m_Weight1;
		float m_Weight2;
		float m_Weight3;
		int32_t m_BoneIndex0;
		int32_t m_BoneIndex1;
		int32_t m_BoneIndex2;
		int32_t m_BoneIndex3;
		float get_weight0();
		float get_weight1();
		float get_weight2();
		float get_weight3();
		int32_t get_boneIndex0();
		int32_t get_boneIndex1();
		int32_t get_boneIndex2();
		int32_t get_boneIndex3();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::BoneWeight other);
	};
}

