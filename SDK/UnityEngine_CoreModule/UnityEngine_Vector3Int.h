#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Vector3Int
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_X;
		int32_t m_Y;
		int32_t m_Z;
		int32_t get_x();
		int32_t get_y();
		int32_t get_z();
		void _ctor(int32_t x, int32_t y, int32_t z);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Vector3Int lhs, UnityEngine_CoreModule::UnityEngine::Vector3Int rhs);
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Vector3Int other);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static void _cctor();
	};
	bool operator==(UnityEngine_CoreModule::UnityEngine::Vector3Int& lhs, UnityEngine_CoreModule::UnityEngine::Vector3Int& rhs);
}

