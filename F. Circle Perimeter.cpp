#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


int ans;
int t,n;
int main()
{
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n;
		int y1=0,y2=0;
		for(int i=n;i>=1;i--)
		{
			// 
			while(i*i+y1*y1<n*n)y1++;
			while(i*i+y2*y2<(n+1)*(n+1))y2++;
			ans+=(y2-y1);
		}
    
		cout<<ans*4<<endl;
	}
	// 
}

/*


EV Charging Station Management

 1. Functional Requirements

1. User Management
    - User Registration and Authentication: The system should allow new users to register and existing users to log in.
    - User Profiles: Users should be able to view and edit their profiles, including personal details, payment information, and preferences.
    - Role Management: Different roles (e.g., admin, station operator, end-user) should have different permissions and access levels.
2. Station Management
    - Station Registration: Ability for admins to add new charging stations, including location, number of charging points, and specifications.
    - Station Monitoring: Real-time monitoring of station status, including availability, operational status, and usage statistics.
    - Maintenance Scheduling: Schedule and track maintenance activities for each station.
3. Charging Session Management
    - Session Initiation and Termination: Users should be able to start and stop charging sessions via a mobile app or web interface.
    - Real-time Status Updates: Provide real-time updates on charging progress, including time remaining, power delivered, and cost incurred.
    - Reservation System: Allow users to reserve charging slots in advance.
4. Billing and Payment
    - Payment Processing: Support multiple payment methods, including credit/debit cards, digital wallets, and subscription plans.
    - Pricing Models: Implement different pricing models such as pay-per-use, time-based, and subscription-based pricing.
    - Billing History: Users should be able to view their past charging sessions and associated costs.
5. Notifications and Alerts
    - Session Notifications: Notify users of important events such as session start, completion, and errors.
    - System Alerts: Admins and operators should receive alerts for critical issues like station malfunctions or power outages.
6. Reporting and Analytics
    - Usage Reports: Generate reports on station usage, user activity, revenue, and performance metrics.
    - Data Visualization: Provide dashboards with key performance indicators (KPIs) and trends.
7. Integration and Interoperability
    - Third-Party Integration: Integrate with third-party systems such as navigation apps, fleet management systems, and utility companies.
    - API Access: Provide APIs for external systems to interact with the EV charging management system.
8. Security and Compliance
    - Data Security: Ensure secure handling and storage of user data, payment information, and system logs.
    - Regulatory Compliance: Comply with relevant regulations and standards, including data protection and electric vehicle charging standards.

 2. Non-Functional Requirements

1. Performance
    - Scalability: The system should be able to scale to manage thousands of charging stations and users without performance degradation.
    - Response Time: Ensure that key operations (e.g., session initiation, payment processing) are completed within acceptable time frames (e.g., < 2 seconds).
2. Reliability
    - Availability: Aim for high availability (e.g., 99.9% uptime) to ensure the system is accessible whenever needed.
    - Fault Tolerance: Implement mechanisms to handle failures gracefully and recover quickly.
3. Usability
    - User Interface: Design intuitive and user-friendly interfaces for web and mobile applications.
    - Accessibility: Ensure the system is accessible to users with disabilities, following WCAG guidelines.
4. Maintainability
    - Modular Architecture: Use a modular design to facilitate updates, maintenance, and scalability.
    - Documentation: Provide comprehensive documentation for developers, operators, and end-users.
5. Security
    - Authentication and Authorization: Implement strong authentication and role-based authorization.
    - Encryption: Use encryption for data at rest and in transit to protect sensitive information.
6. Compliance
    - Standards Adherence: Ensure compliance with industry standards for EV charging infrastructure (e.g., OCPP, ISO 15118).
    - Data Protection: Adhere to data protection regulations such as GDPR or CCPA.
7. Interoperability
    - Standard Protocols: Support industry-standard communication protocols to ensure interoperability with different hardware and software systems.
8. Support and Maintenance
    - Customer Support: Provide robust customer support options, including live chat, email, and phone support.
    - Maintenance Windows: Schedule regular maintenance windows and inform users in advance to minimize disruption.

By meeting these functional and non-functional requirements, the system will be well-equipped to manage multiple EV charging stations efficiently, ensuring a seamless and user-friendly experience for all stakeholders involved.


*/

// Result


/*

### Different Views/Components and Services for EV Charging Station Management System

To design the EV Charging Station Management System, we need to consider various views, components, and services that align with the functional and non-functional requirements.

#### Views/Components

1. **User Management Views:**
   - **Registration and Login:** Forms for user registration, login, password reset, and account verification.
   - **User Profile:** Interface for viewing and editing user details, payment information, and preferences.
   - **Role Management:** Admin interface for managing user roles and permissions.

2. **Station Management Views:**
   - **Station List:** Display a list of all charging stations with basic details and status indicators.
   - **Station Details:** Detailed view of each station, showing location, number of charging points, status, and specifications.
   - **Add/Edit Station:** Forms for admins to add new stations or edit existing ones.
   - **Maintenance Schedule:** Interface for scheduling and tracking maintenance activities.

3. **Charging Session Management Views:**
   - **Start/Stop Session:** Interface for users to initiate and terminate charging sessions.
   - **Session Status:** Real-time updates on charging progress, including time remaining, power delivered, and cost incurred.
   - **Reservation System:** Booking interface for users to reserve charging slots in advance.

4. **Billing and Payment Views:**
   - **Payment Methods:** Interface for managing payment methods, including adding, editing, and removing options.
   - **Pricing Plans:** Display available pricing models (pay-per-use, time-based, subscription) and allow users to select their preferred plan.
   - **Billing History:** View past charging sessions and associated costs.

5. **Notifications and Alerts Views:**
   - **User Notifications:** Display session start, completion, errors, and other important alerts to users.
   - **System Alerts:** Admin interface for viewing critical system alerts like station malfunctions or power outages.

6. **Reporting and Analytics Views:**
   - **Usage Reports:** Generate and display reports on station usage, user activity, and revenue.
   - **Dashboards:** Visualize key performance indicators (KPIs) and trends with interactive charts and graphs.

7. **Integration and Interoperability Views:**
   - **API Management:** Interface for managing API keys and monitoring API usage.
   - **Third-Party Integrations:** Configuration page for integrating with third-party systems like navigation apps and fleet management systems.

8. **Security and Compliance Views:**
   - **Data Security:** Configuration interface for security settings, encryption, and data protection measures.
   - **Regulatory Compliance:** Display compliance status and manage related settings.

#### Services

1. **Authentication Service:** Handles user registration, login, password management, and authentication processes.
2. **User Service:** Manages user profiles, roles, and permissions.
3. **Station Service:** Manages station data, including adding new stations, updating existing ones, and monitoring station status.
4. **Charging Session Service:** Handles the initiation, monitoring, and termination of charging sessions.
5. **Reservation Service:** Manages the reservation system, allowing users to book charging slots in advance.
6. **Payment Service:** Processes payments, manages billing history, and supports different pricing models.
7. **Notification Service:** Sends notifications and alerts to users and admins based on various events and conditions.
8. **Reporting Service:** Generates reports and visualizes data related to station usage, user activity, and system performance.
9. **Integration Service:** Manages integrations with third-party systems and provides API access for external interactions.
10. **Security Service:** Ensures data security, handles encryption, and ensures compliance with relevant regulations.

### Implementation Strategy

By defining these views, components, and services, we can ensure the EV Charging Station Management System is comprehensive, user-friendly, and meets all functional and non-functional requirements. The next steps would involve designing wireframes for each view, setting up the project structure, developing the components and services, and ensuring robust testing and deployment strategies.


*/

/*

Views/Components
1. User Management
Registration and Login View: A page where new users can sign up and existing users can log in.
Profile Page: A page for users to view and update their personal details, payment information, and preferences.
Role Management Dashboard: A view for administrators to manage different user roles and permissions.
2. Station Management
Station Registration Page: A form where administrators can add new charging stations, including details like location, number of charging points, and specifications.
Station Monitoring Dashboard: A real-time overview of all stations, showing availability, operational status, and usage statistics.
Maintenance Scheduler: A view to schedule and track maintenance activities for each station.
3. Charging Session Management
Session Control Interface: A page where users can start and stop charging sessions via the web interface.
Charging Status Page: Real-time updates on charging progress, showing time remaining, power delivered, and cost incurred.
Reservation System: A view for users to reserve charging slots in advance.
4. Billing and Payment
Payment Processing Page: A secure interface to handle multiple payment methods like credit/debit cards and digital wallets.
Pricing Model Configuration: A page for administrators to set different pricing models such as pay-per-use, time-based, and subscription-based.
Billing History Page: A view for users to see their past charging sessions and the costs associated with them.
5. Notifications and Alerts
Notification Center: A hub where users can receive updates about session start, completion, and errors.
Admin Alert Dashboard: A page for admins to see critical system alerts like station malfunctions or power outages.
6. Reporting and Analytics
Usage Reports Page: A view to generate and display reports on station usage, user activity, revenue, and performance metrics.
Data Visualization Dashboard: An interface with charts and graphs to visualize key performance indicators (KPIs) and trends.
7. Integration and Interoperability
Third-Party Integration Settings: A page to manage integrations with navigation apps, fleet management systems, and utility companies.
API Management Interface: A view to provide and manage API access for external systems to interact with the EV charging management system.
8. Security and Compliance
Security Settings Page: A view for managing data security settings and compliance with relevant regulations.
Audit Logs Interface: A page for viewing system logs to ensure compliance and security monitoring.
Services
1. User Management Services
Authentication Service: Handles user login, registration, and session management.
User Profile Service: Manages user profile data, including personal details and preferences.
Role Management Service: Manages different user roles and their permissions.
2. Station Management Services
Station Registration Service: Adds new charging stations to the system.
Station Monitoring Service: Provides real-time status updates for each charging station.
Maintenance Scheduling Service: Manages scheduling and tracking of maintenance activities.
3. Charging Session Management Services
Session Management Service: Handles initiation and termination of charging sessions.
Real-time Status Service: Provides real-time updates on charging progress.
Reservation Service: Manages booking and reservation of charging slots.
4. Billing and Payment Services
Payment Processing Service: Handles transactions and payment processing.
Pricing Model Service: Manages different pricing models.
Billing History Service: Keeps track of users' billing history and past transactions.
5. Notification and Alert Services
Notification Service: Sends session notifications and alerts to users.
Admin Alert Service: Sends critical system alerts to administrators and operators.
6. Reporting and Analytics Services
Report Generation Service: Generates usage reports and performance metrics.
Data Visualization Service: Provides visual representations of data for dashboards.
7. Integration and Interoperability Services
Third-Party Integration Service: Manages integrations with external systems.
API Service: Provides API access for external systems to interact with the EV charging management system.
8. Security and Compliance Services
Data Security Service: Ensures secure handling and storage of user data.
Compliance Service: Ensures adherence to relevant regulations and standards.
Audit Log Service: Manages system logs for security monitoring and compliance.
By organizing the views and components along with the services in this way, the EV Charging Station Management System will be well-structured, providing a seamless and efficient user experience while meeting both functional and non-functional requirements.



*/

