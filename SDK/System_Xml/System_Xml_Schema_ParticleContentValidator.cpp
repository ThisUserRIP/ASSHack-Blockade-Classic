#include "System_Xml_Schema_ParticleContentValidator.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::ParticleContentValidator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "ParticleContentValidator");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::ParticleContentValidator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::_ctor(System_Xml::System::Xml::Schema::XmlSchemaContentType contentType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.XmlSchemaContentType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&contentType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::_ctor(System_Xml::System::Xml::Schema::XmlSchemaContentType contentType, bool enableUpaCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.XmlSchemaContentType", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&contentType;
	params[1] = (intptr_t)&enableUpaCheck;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::InitValidation(System_Xml::System::Xml::Schema::ValidationState* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitValidation", std::vector<std::string> { "System.Xml.Schema.ValidationState" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::ParticleContentValidator::ValidateElement(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, int32_t& errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateElement", std::vector<std::string> { "System.Xml.XmlQualifiedName", "System.Xml.Schema.ValidationState", "System.Int32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)context;
	params[2] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool System_Xml::System::Xml::Schema::ParticleContentValidator::CompleteValidation(System_Xml::System::Xml::Schema::ValidationState* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteValidation", std::vector<std::string> { "System.Xml.Schema.ValidationState" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::OpenGroup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OpenGroup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::CloseGroup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloseGroup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::ParticleContentValidator::Exists(System_Xml::System::Xml::XmlQualifiedName* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Exists", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::AddName(System_Xml::System::Xml::XmlQualifiedName* name, mscorlib::System::Object* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddName", std::vector<std::string> { "System.Xml.XmlQualifiedName", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::AddNamespaceList(System_Xml::System::Xml::Schema::NamespaceList* namespaceList, mscorlib::System::Object* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddNamespaceList", std::vector<std::string> { "System.Xml.Schema.NamespaceList", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)namespaceList;
	params[1] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::AddLeafNode(System_Xml::System::Xml::Schema::SyntaxTreeNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddLeafNode", std::vector<std::string> { "System.Xml.Schema.SyntaxTreeNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::AddChoice()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddChoice");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::AddSequence()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSequence");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::AddStar()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddStar");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::AddPlus()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddPlus");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::AddQMark()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddQMark");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::AddLeafRange(mscorlib::System::Decimal min, mscorlib::System::Decimal max)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddLeafRange", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&min;
	params[1] = (intptr_t)&max;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::Closure(System_Xml::System::Xml::Schema::InteriorNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Closure", std::vector<std::string> { "System.Xml.Schema.InteriorNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::ContentValidator* System_Xml::System::Xml::Schema::ParticleContentValidator::Finish(bool useDFA)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finish", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&useDFA;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::ContentValidator*)returnValue;
}
IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* System_Xml::System::Xml::Schema::ParticleContentValidator::CalculateTotalFollowposForRangeNodes(System_Xml::System::Xml::Schema::BitSet* firstpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos, System_Xml::System::Xml::Schema::BitSet& posWithRangeTerminals)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateTotalFollowposForRangeNodes", std::vector<std::string> { "System.Xml.Schema.BitSet", "System.Xml.Schema.BitSet[]", "System.Xml.Schema.BitSet&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)firstpos;
	params[1] = (intptr_t)followpos;
	params[2] = (intptr_t)&posWithRangeTerminals;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>*)returnValue;
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::CheckCMUPAWithLeafRangeNodes(System_Xml::System::Xml::Schema::BitSet* curpos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCMUPAWithLeafRangeNodes", std::vector<std::string> { "System.Xml.Schema.BitSet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)curpos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::BitSet* System_Xml::System::Xml::Schema::ParticleContentValidator::GetApplicableMinMaxFollowPos(System_Xml::System::Xml::Schema::BitSet* curpos, System_Xml::System::Xml::Schema::BitSet* posWithRangeTerminals, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* minmaxFollowPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetApplicableMinMaxFollowPos", std::vector<std::string> { "System.Xml.Schema.BitSet", "System.Xml.Schema.BitSet", "System.Xml.Schema.BitSet[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)curpos;
	params[1] = (intptr_t)posWithRangeTerminals;
	params[2] = (intptr_t)minmaxFollowPos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::BitSet*)returnValue;
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution(System_Xml::System::Xml::Schema::BitSet* firstpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckUniqueParticleAttribution", std::vector<std::string> { "System.Xml.Schema.BitSet", "System.Xml.Schema.BitSet[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)firstpos;
	params[1] = (intptr_t)followpos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ParticleContentValidator::CheckUniqueParticleAttribution(System_Xml::System::Xml::Schema::BitSet* curpos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckUniqueParticleAttribution", std::vector<std::string> { "System.Xml.Schema.BitSet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)curpos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<IL2CPP::Array<int32_t>*>* System_Xml::System::Xml::Schema::ParticleContentValidator::BuildTransitionTable(System_Xml::System::Xml::Schema::BitSet* firstpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos, int32_t endMarkerPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildTransitionTable", std::vector<std::string> { "System.Xml.Schema.BitSet", "System.Xml.Schema.BitSet[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)firstpos;
	params[1] = (intptr_t)followpos;
	params[2] = (intptr_t)&endMarkerPos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<IL2CPP::Array<int32_t>*>*)returnValue;
}
