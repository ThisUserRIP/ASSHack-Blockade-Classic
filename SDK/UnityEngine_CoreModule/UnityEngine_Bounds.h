#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Bounds
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Center;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Extents;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector3 center, UnityEngine_CoreModule::UnityEngine::Vector3 size);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Bounds other);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_center();
		void set_center(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_size();
		void set_size(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_extents();
		void set_extents(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_min();
		void set_min(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_max();
		void set_max(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Bounds lhs, UnityEngine_CoreModule::UnityEngine::Bounds rhs);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Bounds lhs, UnityEngine_CoreModule::UnityEngine::Bounds rhs);
		void SetMinMax(UnityEngine_CoreModule::UnityEngine::Vector3 min, UnityEngine_CoreModule::UnityEngine::Vector3 max);
		void Encapsulate(UnityEngine_CoreModule::UnityEngine::Vector3 point);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
	};
	bool operator==(UnityEngine_CoreModule::UnityEngine::Bounds& lhs, UnityEngine_CoreModule::UnityEngine::Bounds& rhs);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Bounds& lhs, UnityEngine_CoreModule::UnityEngine::Bounds& rhs);
}

