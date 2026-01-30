#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Hash128
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_u32_0;
		uint32_t m_u32_1;
		uint32_t m_u32_2;
		uint32_t m_u32_3;
		void _ctor(uint64_t u64_0, uint64_t u64_1);
		uint64_t get_u64_0();
		uint64_t get_u64_1();
		int32_t CompareTo(UnityEngine_CoreModule::UnityEngine::Hash128 rhs);
		mscorlib::System::String* ToString();
		static mscorlib::System::String* Hash128ToStringImpl(UnityEngine_CoreModule::UnityEngine::Hash128 hash);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Hash128 obj);
		int32_t GetHashCode();
		int32_t CompareTo(mscorlib::System::Object* obj);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Hash128 hash1, UnityEngine_CoreModule::UnityEngine::Hash128 hash2);
		static bool op_LessThan(UnityEngine_CoreModule::UnityEngine::Hash128 x, UnityEngine_CoreModule::UnityEngine::Hash128 y);
		static bool op_GreaterThan(UnityEngine_CoreModule::UnityEngine::Hash128 x, UnityEngine_CoreModule::UnityEngine::Hash128 y);
		static mscorlib::System::String* Hash128ToStringImpl_Injected(UnityEngine_CoreModule::UnityEngine::Hash128& hash);
	};
	bool operator==(UnityEngine_CoreModule::UnityEngine::Hash128& hash1, UnityEngine_CoreModule::UnityEngine::Hash128& hash2);
	bool operator<(UnityEngine_CoreModule::UnityEngine::Hash128 x, UnityEngine_CoreModule::UnityEngine::Hash128 y);
	bool operator>(UnityEngine_CoreModule::UnityEngine::Hash128 x, UnityEngine_CoreModule::UnityEngine::Hash128 y);
}

